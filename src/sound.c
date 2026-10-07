#include "global.h"
static u16 HeRemapBGM(u16 songNum);
#include "gba/m4a_internal.h"
#include "sound.h"
#include "battle.h"
#include "m4a.h"
#include "main.h"
#include "overworld.h"
#include "pokemon.h"
#include "constants/cries.h"
#include "constants/songs.h"
#include "task.h"
#include "test_runner.h"

struct Fanfare
{
    u16 songNum;
    u16 duration;
};

extern u8 gDisableMapMusicChangeOnMapLoad;

EWRAM_DATA struct MusicPlayerInfo *gMPlay_PokemonCry = NULL;
EWRAM_DATA u8 gPokemonCryBGMDuckingCounter = 0;

static u16 sCurrentMapMusic;
static u16 sNextMapMusic;
static u8 sMapMusicState;
static u8 sMapMusicFadeInSpeed;
static u16 sFanfareCounter;

COMMON_DATA bool8 gDisableMusic = 0;

extern struct ToneData gCryTable[];
extern struct ToneData gCryTable_Reverse[];

static void Task_Fanfare(u8 taskId);
static void CreateFanfareTask(void);
static void RestoreBGMVolumeAfterPokemonCry(void);

// The 1st argument in the table is the length of the fanfare, measured in frames. This is calculated by taking the duration of the midi file, multiplying by 59.72750056960583, and rounding up to the next nearest integer.
static const struct Fanfare sFanfares[] = {
    [FANFARE_LEVEL_UP]            = { MUS_LEVEL_UP,             80 },
    [FANFARE_OBTAIN_ITEM]         = { MUS_OBTAIN_ITEM,         160 },
    [FANFARE_EVOLVED]             = { MUS_EVOLVED,             220 },
    [FANFARE_OBTAIN_TMHM]         = { MUS_OBTAIN_TMHM,         220 },
    [FANFARE_HEAL]                = { MUS_HEAL,                160 },
    [FANFARE_OBTAIN_BADGE]        = { MUS_OBTAIN_BADGE,        340 },
    [FANFARE_MOVE_DELETED]        = { MUS_MOVE_DELETED,        180 },
    [FANFARE_OBTAIN_BERRY]        = { MUS_OBTAIN_BERRY,        120 },
    [FANFARE_AWAKEN_LEGEND]       = { MUS_AWAKEN_LEGEND,       710 },
    [FANFARE_SLOTS_JACKPOT]       = { MUS_SLOTS_JACKPOT,       250 },
    [FANFARE_SLOTS_WIN]           = { MUS_SLOTS_WIN,           150 },
    [FANFARE_TOO_BAD]             = { MUS_TOO_BAD,             160 },
    [FANFARE_RG_POKE_FLUTE]       = { MUS_RG_POKE_FLUTE,       450 },
    [FANFARE_RG_OBTAIN_KEY_ITEM]  = { MUS_RG_OBTAIN_KEY_ITEM,  170 },
    [FANFARE_RG_DEX_RATING]       = { MUS_RG_DEX_RATING,       196 },
    [FANFARE_OBTAIN_B_POINTS]     = { MUS_OBTAIN_B_POINTS,     313 },
    [FANFARE_OBTAIN_SYMBOL]       = { MUS_OBTAIN_SYMBOL,       318 },
    [FANFARE_REGISTER_MATCH_CALL] = { MUS_REGISTER_MATCH_CALL, 135 },
};

void InitMapMusic(void)
{
    gDisableMusic = FALSE;
    ResetMapMusic();
}

void MapMusicMain(void)
{
    switch (sMapMusicState)
    {
    case 0:
        break;
    case 1:
        sMapMusicState = 2;
        PlayBGM(sCurrentMapMusic);
        break;
    case 2:
    case 3:
    case 4:
        break;
    case 5:
        if (IsBGMStopped())
        {
            sNextMapMusic = 0;
            sMapMusicState = 0;
        }
        break;
    case 6:
        if (IsBGMStopped() && IsFanfareTaskInactive())
        {
            sCurrentMapMusic = sNextMapMusic;
            sNextMapMusic = 0;
            sMapMusicState = 2;
            PlayBGM(sCurrentMapMusic);
        }
        break;
    case 7:
        if (IsBGMStopped() && IsFanfareTaskInactive())
        {
            FadeInNewBGM(sNextMapMusic, sMapMusicFadeInSpeed);
            sCurrentMapMusic = sNextMapMusic;
            sNextMapMusic = 0;
            sMapMusicState = 2;
            sMapMusicFadeInSpeed = 0;
        }
        break;
    }
}

void ResetMapMusic(void)
{
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 0;
    sMapMusicFadeInSpeed = 0;
}

u16 GetCurrentMapMusic(void)
{
    return sCurrentMapMusic;
}

void PlayNewMapMusic(u16 songNum)
{
    sCurrentMapMusic = songNum;
    sNextMapMusic = 0;
    sMapMusicState = 1;
}

void StopMapMusic(void)
{
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 1;
}

void FadeOutMapMusic(u8 speed)
{
    if (IsNotWaitingForBGMStop())
        FadeOutBGM(speed);
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 5;
}

void FadeOutAndPlayNewMapMusic(u16 songNum, u8 speed)
{
    FadeOutMapMusic(speed);
    sCurrentMapMusic = 0;
    sNextMapMusic = songNum;
    sMapMusicState = 6;
}

void FadeOutAndFadeInNewMapMusic(u16 songNum, u8 fadeOutSpeed, u8 fadeInSpeed)
{
    FadeOutMapMusic(fadeOutSpeed);
    sCurrentMapMusic = 0;
    sNextMapMusic = songNum;
    sMapMusicState = 7;
    sMapMusicFadeInSpeed = fadeInSpeed;
}

static void UNUSED FadeInNewMapMusic(u16 songNum, u8 speed)
{
    FadeInNewBGM(songNum, speed);
    sCurrentMapMusic = songNum;
    sNextMapMusic = 0;
    sMapMusicState = 2;
    sMapMusicFadeInSpeed = 0;
}

bool8 IsNotWaitingForBGMStop(void)
{
    if (sMapMusicState == 6)
        return FALSE;
    if (sMapMusicState == 5)
        return FALSE;
    if (sMapMusicState == 7)
        return FALSE;
    return TRUE;
}

void PlayFanfareByFanfareNum(u8 fanfareNum)
{
    u16 songNum;
    m4aMPlayStop(&gMPlayInfo_BGM);
    songNum = sFanfares[fanfareNum].songNum;
    sFanfareCounter = sFanfares[fanfareNum].duration;
    m4aSongNumStart(songNum);
}

bool8 WaitFanfare(bool8 stop)
{
    if (sFanfareCounter)
    {
        sFanfareCounter--;
        return FALSE;
    }
    else
    {
        if (!stop)
            m4aMPlayContinue(&gMPlayInfo_BGM);
        else
            m4aSongNumStart(MUS_DUMMY);

        return TRUE;
    }
}

void PlayFanfare(u16 songNum)
{
    s32 i;
    for (i = 0; (u32)i < ARRAY_COUNT(sFanfares); i++)
    {
        if (sFanfares[i].songNum == songNum)
        {
            PlayFanfareByFanfareNum(i);
            CreateFanfareTask();
            return;
        }
    }

    // songNum is not in sFanfares
    // Play first fanfare in table instead
    PlayFanfareByFanfareNum(0);
    CreateFanfareTask();
}

bool8 IsFanfareTaskInactive(void)
{
    if (FuncIsActiveTask(Task_Fanfare) == TRUE)
        return FALSE;
    return TRUE;
}

static void Task_Fanfare(u8 taskId)
{
    if (gTestRunnerHeadless)
    {
        DestroyTask(taskId);
        sFanfareCounter = 0;
        return;
    }

    if (sFanfareCounter)
    {
        sFanfareCounter--;
    }
    else
    {
        m4aMPlayContinue(&gMPlayInfo_BGM);
        DestroyTask(taskId);
    }
}

static void CreateFanfareTask(void)
{
    if (FuncIsActiveTask(Task_Fanfare) != TRUE)
        CreateTask(Task_Fanfare, 80);
}

void FadeInNewBGM(u16 songNum, u8 speed)
{
    songNum = HeRemapBGM(songNum);
    if (gDisableMusic)
        songNum = 0;
    if (songNum == MUS_NONE)
        songNum = 0;
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlayInfo_BGM);
    m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 0);
    m4aSongNumStop(songNum);
    m4aMPlayFadeIn(&gMPlayInfo_BGM, speed);
}

void FadeOutBGMTemporarily(u8 speed)
{
    m4aMPlayFadeOutTemporarily(&gMPlayInfo_BGM, speed);
}

bool8 IsBGMPausedOrStopped(void)
{
    if (gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_PAUSE)
        return TRUE;
    if (!(gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return TRUE;
    return FALSE;
}

void FadeInBGM(u8 speed)
{
    m4aMPlayFadeIn(&gMPlayInfo_BGM, speed);
}

void FadeOutBGM(u8 speed)
{
    m4aMPlayFadeOut(&gMPlayInfo_BGM, speed);
}

bool8 IsBGMStopped(void)
{
    if (!(gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return TRUE;
    return FALSE;
}

void PlayCry_Normal(enum Species species, s8 pan)
{
    m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
    PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, CRY_MODE_NORMAL);
    gPokemonCryBGMDuckingCounter = 2;
    RestoreBGMVolumeAfterPokemonCry();
}

void PlayCry_NormalNoDucking(enum Species species, s8 pan, s8 volume, u8 priority)
{
    PlayCryInternal(species, pan, volume, priority, CRY_MODE_NORMAL);
}

// Assuming it's not CRY_MODE_DOUBLES, this is equivalent to PlayCry_Normal except it allows other modes.
void PlayCry_ByMode(enum Species species, s8 pan, u8 mode)
{
    if (mode == CRY_MODE_DOUBLES)
    {
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    }
    else
    {
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
        gPokemonCryBGMDuckingCounter = 2;
        RestoreBGMVolumeAfterPokemonCry();
    }
}

// Used when releasing multiple Pokémon at once in battle.
void PlayCry_ReleaseDouble(enum Species species, s8 pan, u8 mode)
{
    if (mode == CRY_MODE_DOUBLES)
    {
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    }
    else
    {
        if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
            m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    }
}

// Duck the BGM but don't restore it. Not present in R/S
void PlayCry_DuckNoRestore(enum Species species, s8 pan, u8 mode)
{
    if (mode == CRY_MODE_DOUBLES)
    {
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    }
    else
    {
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
        gPokemonCryBGMDuckingCounter = 2;
    }
}

void PlayCry_Script(enum Species species, u8 mode)
{
    m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
    PlayCryInternal(species, 0, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    gPokemonCryBGMDuckingCounter = 2;
    RestoreBGMVolumeAfterPokemonCry();
}

void PlayCryInternal(enum Species species, s8 pan, s8 volume, u8 priority, u8 mode)
{
    bool32 reverse;
    u32 release;
    u32 length;
    u32 pitch;
    u32 chorus;

    // Set default values
    // May be overridden depending on mode.
    length = 210;
    reverse = FALSE;
    release = 0;
    pitch = 15360;
    chorus = 0;

    // If we're not using extra mega cries, we need to modify the cry mode for mega evolutions.
    if (!P_MODIFIED_MEGA_CRIES && gSpeciesInfo[species].isMegaEvolution)
        mode = P_MODIFIED_MEGA_CRY_MODE;

    switch (mode)
    {
    case CRY_MODE_NORMAL:
        break;
    case CRY_MODE_DOUBLES:
        length = 20;
        release = 225;
        break;
    case CRY_MODE_ENCOUNTER:
        release = 225;
        pitch = 15600;
        chorus = 20;
        volume = 90;
        break;
    case CRY_MODE_HIGH_PITCH:
        length = 50;
        release = 200;
        pitch = 15800;
        chorus = 20;
        volume = 90;
        break;
    case CRY_MODE_ECHO_START:
        length = 25;
        reverse = TRUE;
        release = 100;
        pitch = 15600;
        chorus = 192;
        volume = 90;
        break;
    case CRY_MODE_FAINT:
        release = 200;
        pitch = 14440;
        break;
    case CRY_MODE_ECHO_END:
        release = 220;
        pitch = 15555;
        chorus = 192;
        volume = 70;
        break;
    case CRY_MODE_ROAR_1:
        length = 10;
        release = 100;
        pitch = 14848;
        break;
    case CRY_MODE_ROAR_2:
        length = 60;
        release = 225;
        pitch = 15616;
        break;
    case CRY_MODE_GROWL_1:
        length = 15;
        reverse = TRUE;
        release = 125;
        pitch = 15200;
        break;
    case CRY_MODE_GROWL_2:
        length = 100;
        release = 225;
        pitch = 15200;
        break;
    case CRY_MODE_WEAK_DOUBLES:
        length = 20;
        release = 225;
        // fallthrough
    case CRY_MODE_WEAK:
        pitch = 15000;
        break;
    case CRY_MODE_DYNAMAX:
        length = 255;
        release = 255;
        pitch = 12150;
        chorus = 200;
        break;
    }

    SetPokemonCryVolume(volume);
    SetPokemonCryPanpot(pan);
    SetPokemonCryPitch(pitch);
    SetPokemonCryLength(length);
    SetPokemonCryProgress(0);
    SetPokemonCryRelease(release);
    SetPokemonCryChorus(chorus);
    SetPokemonCryPriority(priority);

    enum PokemonCry cryId = GetCryIdBySpecies(species);
    if (cryId != CRY_NONE)
    {
        cryId--;
        gMPlay_PokemonCry = SetPokemonCryTone(reverse ? &gCryTable_Reverse[cryId] : &gCryTable[cryId]);
    }
}

bool8 IsCryFinished(void)
{
    if (FuncIsActiveTask(Task_DuckBGMForPokemonCry) == TRUE)
    {
        return FALSE;
    }
    else
    {
        ClearPokemonCrySongs();
        return TRUE;
    }
}

void StopCryAndClearCrySongs(void)
{
    m4aMPlayStop(gMPlay_PokemonCry);
    ClearPokemonCrySongs();
}

void StopCry(void)
{
    m4aMPlayStop(gMPlay_PokemonCry);
}

bool8 IsCryPlayingOrClearCrySongs(void)
{
    if (IsPokemonCryPlaying(gMPlay_PokemonCry))
    {
        return TRUE;
    }
    else
    {
        ClearPokemonCrySongs();
        return FALSE;
    }
}

bool8 IsCryPlaying(void)
{
    if (IsPokemonCryPlaying(gMPlay_PokemonCry))
        return TRUE;
    else
        return FALSE;
}

void Task_DuckBGMForPokemonCry(u8 taskId)
{
    if (gPokemonCryBGMDuckingCounter)
    {
        gPokemonCryBGMDuckingCounter--;
        return;
    }

    if (!IsPokemonCryPlaying(gMPlay_PokemonCry))
    {
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 256);
        DestroyTask(taskId);
    }
}

static void RestoreBGMVolumeAfterPokemonCry(void)
{
    if (FuncIsActiveTask(Task_DuckBGMForPokemonCry) != TRUE)
        CreateTask(Task_DuckBGMForPokemonCry, 80);
}

static u16 HeRemapBGM(u16 songNum)
{
    switch (songNum)
    {
    case MUS_ABANDONED_SHIP: return MUS_RG_SS_ANNE;
    case MUS_ABNORMAL_WEATHER: return MUS_RG_VS_LEGEND;
    case MUS_AQUA_MAGMA_HIDEOUT: return MUS_RG_ROCKET_HIDEOUT;
    case MUS_BIRCH_LAB: return MUS_RG_OAK_LAB;
    case MUS_B_ARENA: return MUS_RG_TRAINER_TOWER;
    case MUS_B_DOME: return MUS_RG_TRAINER_TOWER;
    case MUS_B_DOME_LOBBY: return MUS_RG_TRAINER_TOWER;
    case MUS_B_FACTORY: return MUS_RG_TRAINER_TOWER;
    case MUS_B_FRONTIER: return MUS_RG_TRAINER_TOWER;
    case MUS_B_PALACE: return MUS_RG_TRAINER_TOWER;
    case MUS_B_PIKE: return MUS_RG_TRAINER_TOWER;
    case MUS_B_PYRAMID: return MUS_RG_VICTORY_ROAD;
    case MUS_B_PYRAMID_TOP: return MUS_RG_VICTORY_ROAD;
    case MUS_B_TOWER: return MUS_RG_TRAINER_TOWER;
    case MUS_B_TOWER_RS: return MUS_RG_TRAINER_TOWER;
    case MUS_CABLE_CAR: return MUS_RG_CYCLING;
    case MUS_CAVE_OF_ORIGIN: return MUS_RG_MT_MOON;
    case MUS_CONTEST: return MUS_RG_UNION_ROOM;
    case MUS_CONTEST_LOBBY: return MUS_RG_UNION_ROOM;
    case MUS_CONTEST_RESULTS: return MUS_RG_VICTORY_TRAINER;
    case MUS_CONTEST_WINNER: return MUS_RG_VICTORY_TRAINER;
    case MUS_CREDITS: return MUS_RG_CREDITS;
    case MUS_CYCLING: return MUS_RG_CYCLING;
    case MUS_C_COMM_CENTER: return MUS_RG_POKE_CENTER;
    case MUS_C_VS_LEGEND_BEAST: return MUS_RG_VS_LEGEND;
    case MUS_DESERT: return MUS_RG_ROUTE24;
    case MUS_DEWFORD: return MUS_RG_FUCHSIA;
    case MUS_ENCOUNTER_AQUA: return MUS_RG_ENCOUNTER_ROCKET;
    case MUS_ENCOUNTER_BRENDAN: return MUS_RG_ENCOUNTER_RIVAL;
    case MUS_ENCOUNTER_CHAMPION: return MUS_RG_ENCOUNTER_RIVAL;
    case MUS_ENCOUNTER_COOL: return MUS_RG_ENCOUNTER_BOY;
    case MUS_ENCOUNTER_ELITE_FOUR: return MUS_RG_ENCOUNTER_GYM_LEADER;
    case MUS_ENCOUNTER_FEMALE: return MUS_RG_ENCOUNTER_GIRL;
    case MUS_ENCOUNTER_GIRL: return MUS_RG_ENCOUNTER_GIRL;
    case MUS_ENCOUNTER_HIKER: return MUS_RG_ENCOUNTER_BOY;
    case MUS_ENCOUNTER_INTENSE: return MUS_RG_ENCOUNTER_GYM_LEADER;
    case MUS_ENCOUNTER_INTERVIEWER: return MUS_RG_ENCOUNTER_GIRL;
    case MUS_ENCOUNTER_MAGMA: return MUS_RG_ENCOUNTER_ROCKET;
    case MUS_ENCOUNTER_MALE: return MUS_RG_ENCOUNTER_BOY;
    case MUS_ENCOUNTER_MAY: return MUS_RG_ENCOUNTER_RIVAL;
    case MUS_ENCOUNTER_RICH: return MUS_RG_ENCOUNTER_BOY;
    case MUS_ENCOUNTER_SUSPICIOUS: return MUS_RG_ENCOUNTER_ROCKET;
    case MUS_ENCOUNTER_SWIMMER: return MUS_RG_ENCOUNTER_BOY;
    case MUS_ENCOUNTER_TWINS: return MUS_RG_ENCOUNTER_GIRL;
    case MUS_END: return MUS_RG_CREDITS;
    case MUS_EVER_GRANDE: return MUS_RG_CELADON;
    case MUS_EVOLUTION: return MUS_RG_CAUGHT;
    case MUS_FALLARBOR: return MUS_RG_PEWTER;
    case MUS_FOLLOW_ME: return MUS_RG_FOLLOW_ME;
    case MUS_FORTREE: return MUS_RG_FUCHSIA;
    case MUS_GAME_CORNER: return MUS_RG_GAME_CORNER;
    case MUS_GSC_PEWTER: return MUS_RG_PEWTER;
    case MUS_GYM: return MUS_RG_GYM;
    case MUS_HALL_OF_FAME: return MUS_RG_HALL_OF_FAME;
    case MUS_HALL_OF_FAME_ROOM: return MUS_RG_HALL_OF_FAME;
    case MUS_HELP: return MUS_RG_FOLLOW_ME;
    case MUS_INTRO: return MUS_RG_INTRO_FIGHT;
    case MUS_INTRO_BATTLE: return MUS_RG_INTRO_FIGHT;
    case MUS_LILYCOVE: return MUS_RG_CELADON;
    case MUS_LILYCOVE_MUSEUM: return MUS_RG_CELADON;
    case MUS_LINK_CONTEST_P1: return MUS_RG_UNION_ROOM;
    case MUS_LINK_CONTEST_P2: return MUS_RG_UNION_ROOM;
    case MUS_LINK_CONTEST_P3: return MUS_RG_UNION_ROOM;
    case MUS_LINK_CONTEST_P4: return MUS_RG_UNION_ROOM;
    case MUS_LITTLEROOT: return MUS_RG_PALLET;
    case MUS_LITTLEROOT_TEST: return MUS_RG_PALLET;
    case MUS_MT_CHIMNEY: return MUS_RG_MT_MOON;
    case MUS_MT_PYRE: return MUS_RG_POKE_TOWER;
    case MUS_MT_PYRE_EXTERIOR: return MUS_RG_CELADON;
    case MUS_OCEANIC_MUSEUM: return MUS_RG_SS_ANNE;
    case MUS_OLDALE: return MUS_RG_PEWTER;
    case MUS_PETALBURG: return MUS_RG_VERMILLION;
    case MUS_PETALBURG_WOODS: return MUS_RG_VIRIDIAN_FOREST;
    case MUS_POKE_CENTER: return MUS_RG_POKE_CENTER;
    case MUS_POKE_MART: return MUS_RG_GAME_CORNER;
    case MUS_RAYQUAZA_APPEARS: return MUS_RG_VS_LEGEND;
    case MUS_ROULETTE: return MUS_RG_GAME_CORNER;
    case MUS_ROUTE101: return MUS_RG_ROUTE1;
    case MUS_ROUTE104: return MUS_RG_ROUTE1;
    case MUS_ROUTE110: return MUS_RG_ROUTE24;
    case MUS_ROUTE113: return MUS_RG_LAVENDER;
    case MUS_ROUTE119: return MUS_RG_ROUTE11;
    case MUS_ROUTE120: return MUS_RG_ROUTE24;
    case MUS_ROUTE122: return MUS_RG_ROUTE11;
    case MUS_RUSTBORO: return MUS_RG_PEWTER;
    case MUS_SAFARI_ZONE: return MUS_RG_VIRIDIAN_FOREST;
    case MUS_SAILING: return MUS_RG_SS_ANNE;
    case MUS_SCHOOL: return MUS_RG_OAK_LAB;
    case MUS_SEALED_CHAMBER: return MUS_RG_SEVII_CAVE;
    case MUS_SLATEPORT: return MUS_RG_VERMILLION;
    case MUS_SOOTOPOLIS: return MUS_RG_CELADON;
    case MUS_SURF: return MUS_RG_SURF;
    case MUS_TITLE: return MUS_RG_TITLE;
    case MUS_TRICK_HOUSE: return MUS_RG_SILPH;
    case MUS_UNDERWATER: return MUS_RG_SEVII_CAVE;
    case MUS_VERDANTURF: return MUS_RG_CELADON;
    case MUS_VICTORY_AQUA_MAGMA: return MUS_RG_VICTORY_TRAINER;
    case MUS_VICTORY_GYM_LEADER: return MUS_RG_VICTORY_GYM_LEADER;
    case MUS_VICTORY_LEAGUE: return MUS_RG_VICTORY_GYM_LEADER;
    case MUS_VICTORY_ROAD: return MUS_RG_VICTORY_ROAD;
    case MUS_VICTORY_TRAINER: return MUS_RG_VICTORY_TRAINER;
    case MUS_VICTORY_WILD: return MUS_RG_VICTORY_WILD;
    case MUS_VS_AQUA_MAGMA: return MUS_RG_VS_TRAINER;
    case MUS_VS_AQUA_MAGMA_LEADER: return MUS_RG_VS_CHAMPION;
    case MUS_VS_CHAMPION: return MUS_RG_VS_CHAMPION;
    case MUS_VS_ELITE_FOUR: return MUS_RG_VS_GYM_LEADER;
    case MUS_VS_FRONTIER_BRAIN: return MUS_RG_VS_GYM_LEADER;
    case MUS_VS_GYM_LEADER: return MUS_RG_VS_GYM_LEADER;
    case MUS_VS_KYOGRE_GROUDON: return MUS_RG_VS_LEGEND;
    case MUS_VS_MEW: return MUS_RG_VS_LEGEND;
    case MUS_VS_RAYQUAZA: return MUS_RG_VS_LEGEND;
    case MUS_VS_REGI: return MUS_RG_VS_LEGEND;
    case MUS_VS_RIVAL: return MUS_RG_VS_TRAINER;
    case MUS_VS_TRAINER: return MUS_RG_VS_TRAINER;
    case MUS_VS_WILD: return MUS_RG_VS_WILD;
    case MUS_WEATHER_GROUDON: return MUS_RG_VS_LEGEND;
    default: return songNum;
    }
}

void PlayBGM(u16 songNum)
{
    songNum = HeRemapBGM(songNum);
    if (gDisableMusic)
        songNum = 0;
    if (songNum == MUS_NONE)
        songNum = 0;
    m4aSongNumStart(songNum);
}

void PlaySE(u16 songNum)
{
    if (gDisableMapMusicChangeOnMapLoad == MUSIC_DISABLE_OFF)
        m4aSongNumStart(songNum);
}

void PlaySE12WithPanning(u16 songNum, s8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlayInfo_SE1);
    m4aMPlayImmInit(&gMPlayInfo_SE2);
    m4aMPlayPanpotControl(&gMPlayInfo_SE1, TRACKS_ALL, pan);
    m4aMPlayPanpotControl(&gMPlayInfo_SE2, TRACKS_ALL, pan);
}

void PlaySE1WithPanning(u16 songNum, s8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlayInfo_SE1);
    m4aMPlayPanpotControl(&gMPlayInfo_SE1, TRACKS_ALL, pan);
}

void PlaySE2WithPanning(u16 songNum, s8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlayInfo_SE2);
    m4aMPlayPanpotControl(&gMPlayInfo_SE2, TRACKS_ALL, pan);
}

void SE12PanpotControl(s8 pan)
{
    m4aMPlayPanpotControl(&gMPlayInfo_SE1, TRACKS_ALL, pan);
    m4aMPlayPanpotControl(&gMPlayInfo_SE2, TRACKS_ALL, pan);
}

bool8 IsSEPlaying(void)
{
    if ((gMPlayInfo_SE1.status & MUSICPLAYER_STATUS_PAUSE) && (gMPlayInfo_SE2.status & MUSICPLAYER_STATUS_PAUSE))
        return FALSE;
    if (!(gMPlayInfo_SE1.status & MUSICPLAYER_STATUS_TRACK) && !(gMPlayInfo_SE2.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}

bool8 IsBGMPlaying(void)
{
    if (gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_PAUSE)
        return FALSE;
    if (!(gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}

bool8 IsSpecialSEPlaying(void)
{
    if (gMPlayInfo_SE3.status & MUSICPLAYER_STATUS_PAUSE)
        return FALSE;
    if (!(gMPlayInfo_SE3.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}
