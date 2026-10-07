#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "pokemon.h"
#include "pokedex.h"
#include "constants/pokedex.h"
#include "script_pokemon_util.h"
#include "string_util.h"
#include "strings.h"
#include "region_map.h"
#include "item.h"
#include "rtc.h"
#include "overworld.h"
#include "constants/items.h"
#include "constants/maps.h"
struct HeQuest {
    u16 species, flag;
    u8 group, map, researchGroup, researchMap;
    u16 item;
    u8 generation, night;
};
static const struct HeQuest sQuests[] = {
#include "data/hoenn_quests.h"
};
static EWRAM_DATA u16 sPreview = 0;
static const struct HeQuest *ActiveQuest(void)
{
    u32 id = VarGet(VAR_HE_ACTIVE_QUEST);
    return id > 0 && id <= ARRAY_COUNT(sQuests) ? &sQuests[id - 1] : NULL;
}
static void DescribeQuest(const struct HeQuest *q)
{
    StringCopy(gStringVar1, GetSpeciesName(q->species));
    GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(q->group, q->map)->regionMapSectionId, 0);
    StringCopy(gStringVar3, GetItemName(q->item));
}
void HeQuestNext(void)
{
    u32 i;
    gSpecialVar_Result = FALSE;
    for (i = 0; i < ARRAY_COUNT(sQuests); i++)
    {
        sPreview = sPreview % ARRAY_COUNT(sQuests) + 1;
        if (sQuests[sPreview - 1].generation == gSpecialVar_0x8005 + 1 && !FlagGet(sQuests[sPreview - 1].flag))
        {
            DescribeQuest(&sQuests[sPreview - 1]);
            gSpecialVar_Result = TRUE;
            return;
        }
    }
}
void HeQuestAccept(void)
{
    if (sPreview > 0 && sPreview <= ARRAY_COUNT(sQuests))
    {
        VarSet(VAR_HE_ACTIVE_QUEST, sPreview);
        VarSet(VAR_HE_QUEST_STAGE, 1);
    }
}
void HeQuestDescribeActive(void)
{
    const struct HeQuest *q = ActiveQuest();
    gSpecialVar_Result = q != NULL;
    if (q) DescribeQuest(q);
}
void HeQuestInvestigate(void)
{
    const struct HeQuest *q = ActiveQuest();
    gSpecialVar_Result = 0;
    if (!q) return;
    DescribeQuest(q);
    if (gSaveBlock1Ptr->location.mapGroup != q->researchGroup || gSaveBlock1Ptr->location.mapNum != q->researchMap)
        return;
    gSpecialVar_Result = 1;
    if (!CheckBagHasItem(q->item, 1)) return;
    VarSet(VAR_HE_QUEST_STAGE, 2);
    gSpecialVar_Result = q->night ? 3 : 2;
}
void HeQuestPrepareEncounter(void)
{
    const struct HeQuest *q = ActiveQuest();
    gSpecialVar_Result = 0;
    if (!q || q->group != gSaveBlock1Ptr->location.mapGroup || q->map != gSaveBlock1Ptr->location.mapNum || FlagGet(q->flag)) return;
    DescribeQuest(q);
    if (VarGet(VAR_HE_QUEST_STAGE) != 2) { gSpecialVar_Result = 1; return; }
    RtcCalcLocalTime();
    if (q->night && gLocalTime.hours >= 6 && gLocalTime.hours < 18) { gSpecialVar_Result = 2; return; }
    CreateScriptedWildMon(q->species, 60 + q->generation * 2, ITEM_NONE);
    gSpecialVar_Result = 3;
}
void HeQuestComplete(void)
{
    const struct HeQuest *q = ActiveQuest();
    if (!q || gBattleOutcome != B_OUTCOME_CAUGHT) return;
    FlagSet(q->flag);
    VarSet(VAR_HE_ACTIVE_QUEST, 0);
    VarSet(VAR_HE_QUEST_STAGE, 0);
}
void HePrepareShinyRayquaza(void)
{
    struct PokemonTemplate mon = {0};
    u32 i;
    ZeroEnemyPartyMons();
    mon.species = SPECIES_RAYQUAZA;
    mon.level = 80;
    mon.origin = STATIC_WILDMON_ORIGIN;
    mon.gender = MON_GENDERLESS;
    mon.nature = NATURE_JOLLY;
    mon.isShiny = TRUE;
    mon.doNotUseDefaultShinyness = TRUE;
    mon.moves[0] = MOVE_DRAGON_ASCENT;
    mon.moves[1] = MOVE_DRAGON_CLAW;
    mon.moves[2] = MOVE_EXTREME_SPEED;
    mon.moves[3] = MOVE_EARTHQUAKE;
    for (i = 0; i < NUM_STATS; i++) mon.ivs[i] = 31;
    CreateMonFromTemplate(&gParties[B_TRAINER_OPPONENT_A][0], &mon);
}

// 0.7.0/0.7.1 used 0x36..0x86, which overlaps vanilla story flags.
// Never clear those original flags: their source is ambiguous in old saves.
void HeMigrateQuestProgress(void)
{
    u32 i;
    if (VarGet(VAR_HE_SAVE_REVISION) >= 2)
        return;
    for (i = 0; i < ARRAY_COUNT(sQuests); i++)
    {
        u16 oldFlag = 0x36 + i;
        bool32 wasUnused = oldFlag <= 0x4F || oldFlag == 0x54 || oldFlag == 0x55 || oldFlag == 0x68 || oldFlag == 0x71;
        bool32 caught = GetSetPokedexFlag(SpeciesToNationalPokedexNum(sQuests[i].species), FLAG_GET_CAUGHT);
        if (caught || (wasUnused && FlagGet(oldFlag)))
            FlagSet(sQuests[i].flag);
        else
            FlagClear(sQuests[i].flag);
    }
    VarSet(VAR_HE_SAVE_REVISION, 2);
}
