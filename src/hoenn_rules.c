#include "global.h"
#include "main.h"
#include "hoenn_rules.h"
#include "sinnoh_chapter.h"
#include "unova_chapter.h"
#include "sinnoh_prism.h"
#include "hoenn_expansion.h"
#include "journey_ui.h"
#include "overworld.h"
#include "event_data.h"
#include "sound.h"
#include "item.h"
#include "constants/items.h"
#include "constants/songs.h"

extern void HeStartOpening(MainCallback, MainCallback);
static MainCallback sReturnMain, sReturnVBlank;
static EWRAM_DATA u8 sRow, sChoices[10], sNewGameLanguage, sSeason;
static EWRAM_DATA bool8 sConfigActive, sEditing;
static const u8 sCounts[10]={3,3,2,2,2,2,2,2,2,2};
unsigned char SiNamingSeason(void) {return sConfigActive?sSeason:VarGet(VAR_HE_SEASON);}
unsigned char SiNewGameSeason(void) {return sSeason;}
#define S(x) COMPOUND_STRING(x)
static const u8 *const sLabels[2][10]={
 {S("Difficulty"),S("Level limit"),S("Anti-grinding"),S("Team EXP"),S("Bag in battle"),S("Battle style"),S("DexNav All"),S("Easy Catch"),S("Auto run"),S("Animations")},
 {S("Dificuldade"),S("Limite de nivel"),S("Anti-grinding"),S("EXP da equipe"),S("Mochila na luta"),S("Estilo batalha"),S("DexNav All"),S("Easy Catch"),S("Correr sempre"),S("Animacoes")}
};
static const u8 *const sValues[2][10][3]={
 {{S("Easy"),S("Normal"),S("Hard")},{S("Free"),S("Strict"),S("Soft")},{S("Off"),S("On")},{S("Off"),S("On")},{S("Free"),S("Wild only")},{S("Switch"),S("Set")},{S("Off"),S("On")},{S("Off"),S("On")},{S("Off"),S("On")},{S("Off"),S("On")}},
 {{S("Facil"),S("Normal"),S("Dificil")},{S("Livre"),S("Rigido"),S("Suave")},{S("Nao"),S("Sim")},{S("Nao"),S("Sim")},{S("Livre"),S("Selvagens")},{S("Trocar"),S("Manter")},{S("Nao"),S("Sim")},{S("Nao"),S("Sim")},{S("Nao"),S("Sim")},{S("Nao"),S("Sim")}}
};
static const u8 *const sHints[2][10]={
 {S("Changes trainer levels and IVs."),S("Strict stops EXP and candy at the cap."),S("Faster training. First-route coach helps."),S("The whole party receives experience."),S("Wild only: no bag items versus trainers."),S("Set removes the free switch after a KO."),S("Find local Pokemon before seeing them."),S("100% catch rate for valid wild catches."),S("Run without B. Hold B to walk."),S("Show or skip battle move animations.")},
 {S("Muda os niveis e IVs dos treinadores."),S("Rigido bloqueia EXP e doces no limite."),S("Treino rapido. Coach ajuda na primeira rota."),S("Toda a equipe recebe experiencia."),S("Selvagens: sem mochila contra treinador."),S("Manter remove a troca gratis apos KO."),S("Busque Pokemon locais sem ter visto."),S("100% de captura de selvagens permitidos."),S("Corra sem B. Segure B para andar."),S("Exibir ou pular animacoes dos golpes.")}
};
static void RulesMain(void);
static void SeasonsMain(void);
static void DrawHeader(const u8 *title)
{
    HeUiBegin();HeUiRect(0,0,240,23,1);HeUiRect(0,23,240,1,8);
    HeUiText(title,9,3,11,36,1,0);
}
static void DrawSeasons(void)
{
    u8 i,lang=sNewGameLanguage!=0;
    const u8 *const names[]={S("HOENN"),S("SINNOH"),S("UNOVA")};
    const u8 *const cast[]={S("Brendan / May"),S("Lucas / Dawn"),S("Hilbert / Hilda")};
    DrawHeader(lang?S("ESCOLHA SUA JORNADA"):S("CHOOSE YOUR JOURNEY"));
    for(i=0;i<3;i++)
    {
        u8 y=29+i*35;
        HeUiCard(8,y,224,31);HeUiRect(9,y+1,4,29,sRow==i?10:13);
        HeUiRect(17,y+5,24,21,i==0?4:i==1?7:13);
        if(i==1){HeUiLine(20,y+23,29,y+8,12);HeUiLine(29,y+8,38,y+23,12);HeUiRect(27,y+10,5,3,11);}
        else if(i==0){HeUiRect(19,y+7,20,6,3);HeUiRect(26,y+12,10,10,5);}
        HeUiText(names[i],48,y+1,sRow==i?10:1,17,1,0);
        HeUiText(cast[i],48,y+14,2,24,1,0);
        HeUiText(lang?S("JOGAR"):S("PLAY"),187,y+6,5,7,1,0);
    }
    HeUiText(sRow==2?(lang?S("BW: de Nuvema ate Castelia City."):S("BW: Nuvema through Castelia City.")):(lang?S("Uma historia propria desde o inicio."):S("A fresh start with its own story.")),9,136,1,37,1,0);
    HeUiRect(0,151,240,9,1);HeUiText(lang?S("CIMA/BAIXO: regiao   A: escolher"):S("UP/DOWN: region   A: choose"),9,149,11,37,1,0);
    HeUiPresent();
}
static void DrawRules(void)
{
    u8 i,lang=sNewGameLanguage!=0,first=sRow>=5?sRow-4:0;
    DrawHeader(sEditing?(lang?S("CONFIGURACOES DA JORNADA"):S("JOURNEY SETTINGS")):(lang?S("PREPARE SUA JORNADA"):S("PREPARE YOUR JOURNEY")));
    for(i=0;i<5;i++)
    {
        u8 row=first+i,y=29+i*17;
        HeUiCard(8,y,224,16);
        if(row==sRow)HeUiRect(9,y+1,4,14,10);
        HeUiText(row==10?(sEditing?(lang?S("Salvar ajustes"):S("Save settings")):(lang?S("Comecar aventura"):S("Start adventure"))):sLabels[lang][row],17,y,row==sRow?10:1,21,1,0);
        if(row<10)HeUiText(sValues[lang][row][sChoices[row]],149,y,row==sRow?10:2,13,1,0);
    }
    HeUiText(sRow<10?sHints[lang][sRow]:(lang?S("A: confirmar sua jornada."):S("A: confirm your journey.")),9,118,1,37,2,0);
    HeUiRect(0,151,240,9,1);HeUiText(lang?S("ESQ/DIR: mudar  START: salvar  B: voltar"):S("LEFT/RIGHT: change START: save B: back"),7,149,11,38,1,0);
    HeUiPresent();
}
static void ApplyChoices(void)
{
    VarSet(VAR_HE_DIFFICULTY,sChoices[0]);VarSet(VAR_HE_LEVEL_CAP,sChoices[1]);VarSet(VAR_HE_BAG_RULES,sChoices[4]);
    if(sChoices[2])FlagSet(FLAG_HE_ANTI_GRINDING);else FlagClear(FLAG_HE_ANTI_GRINDING);
    if(sChoices[3])FlagSet(FLAG_HE_EXP_ALL);else FlagClear(FLAG_HE_EXP_ALL);
    if(sChoices[6]){FlagSet(FLAG_HE_DEXNAV_ALL);FlagSet(FLAG_SYS_POKEDEX_GET);}else FlagClear(FLAG_HE_DEXNAV_ALL);
    if(sChoices[7])FlagSet(FLAG_HE_EASY_CATCH);else FlagClear(FLAG_HE_EASY_CATCH);
    if(sChoices[8])FlagSet(FLAG_HE_AUTO_RUN);else FlagClear(FLAG_HE_AUTO_RUN);
    gSaveBlock2Ptr->optionsBattleStyle=sChoices[5];
    gSaveBlock2Ptr->optionsBattleSceneOff=!sChoices[9];
}
static void SeasonsMain(void)
{
    if(HeUiBusy())return;
    if(JOY_NEW(DPAD_UP)){sRow=sRow?sRow-1:2;DrawSeasons();}
    else if(JOY_NEW(DPAD_DOWN)){sRow=(sRow+1)%3;DrawSeasons();}
    else if(JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        if(sRow<3){sSeason=sRow;sRow=0;DrawRules();SetMainCallback2(RulesMain);}
    }
}
static void RulesMain(void)
{
    if(HeUiBusy())return;
    if(JOY_NEW(B_BUTTON))
    {
        if(sEditing){HeUiClose();SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);}
        else{sRow=sSeason;DrawSeasons();SetMainCallback2(SeasonsMain);}
        return;
    }
    if(JOY_NEW(DPAD_UP)){sRow=sRow?sRow-1:10;DrawRules();}
    else if(JOY_NEW(DPAD_DOWN)){sRow=(sRow+1)%11;DrawRules();}
    else if(sRow<10&&(JOY_NEW(DPAD_LEFT)||JOY_NEW(DPAD_RIGHT)||JOY_NEW(A_BUTTON)))
    {
        sChoices[sRow]=(sChoices[sRow]+(JOY_NEW(DPAD_LEFT)?sCounts[sRow]-1:1))%sCounts[sRow];
        PlaySE(SE_SELECT);DrawRules();
    }
    else if((sRow==10&&JOY_NEW(A_BUTTON))||JOY_NEW(START_BUTTON))
    {
        HeUiClose();
        if(sEditing){ApplyChoices();SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);}
        else if(sSeason!=0){SetVBlankCallback(sReturnVBlank);SetMainCallback2(sReturnMain);}
        else HeStartOpening(sReturnMain,sReturnVBlank);
    }
}
void HeStartNewGameConfig(MainCallback main,MainCallback vblank)
{
    static const u8 defaults[10]={1,0,1,0,0,0,0,0,0,1};
    sConfigActive=TRUE;sEditing=FALSE;sRow=sSeason=0;
    sNewGameLanguage=gSaveBlock2Ptr->optionsLanguage;
    sReturnMain=main;sReturnVBlank=vblank;memcpy(sChoices,defaults,sizeof(sChoices));
    HeUiInit(TRUE);DrawSeasons();SetMainCallback2(SeasonsMain);
}
void HeOpenJourneyRules(void)
{
    sEditing=TRUE;sRow=0;sNewGameLanguage=gSaveBlock2Ptr->optionsLanguage;
    sChoices[0]=VarGet(VAR_HE_DIFFICULTY)%3;sChoices[1]=VarGet(VAR_HE_LEVEL_CAP)%3;sChoices[2]=FlagGet(FLAG_HE_ANTI_GRINDING);
    sChoices[3]=FlagGet(FLAG_HE_EXP_ALL);sChoices[4]=VarGet(VAR_HE_BAG_RULES)%2;sChoices[5]=gSaveBlock2Ptr->optionsBattleStyle;
    sChoices[6]=FlagGet(FLAG_HE_DEXNAV_ALL);sChoices[7]=FlagGet(FLAG_HE_EASY_CATCH);sChoices[8]=FlagGet(FLAG_HE_AUTO_RUN);sChoices[9]=!gSaveBlock2Ptr->optionsBattleSceneOff;
    HeUiInit(FALSE);DrawRules();SetMainCallback2(RulesMain);
}
void HeApplyNewGameRules(void)
{
    gSaveBlock2Ptr->optionsLanguage=sNewGameLanguage;VarSet(VAR_HE_SAVE_REVISION,2);
    ApplyChoices();sConfigActive=FALSE;VarSet(VAR_HE_SEASON,sSeason);
    if(sSeason==1)SiInitializeSeason();
    if(sSeason==2)UnInitializeSeason();
}
#undef S
// Repair the 0.7 theft gate without changing the save layout or resetting progress.
// Safe to run repeatedly: later Devon states, sailing and completed arcs are untouched.
void HeRepairProgression(void)
{
    if (SiIsSeason()) {FlagSet(FLAG_RECEIVED_RUNNING_SHOES);FlagSet(FLAG_SYS_B_DASH);SiPrismRepair();return;}
    if(UnIsSeason()){FlagSet(FLAG_RECEIVED_RUNNING_SHOES);FlagSet(FLAG_SYS_B_DASH);return;}
    HeMigrateQuestProgress();
    if (FlagGet(FLAG_BADGE01_GET)
     && !FlagGet(FLAG_DEVON_GOODS_STOLEN)
     && !FlagGet(FLAG_RECOVERED_DEVON_GOODS)
     && !FlagGet(FLAG_RECEIVED_POKENAV)
     && !FlagGet(FLAG_HE_HARBOR_SAFE)
     && VarGet(VAR_RUSTBORO_CITY_STATE) == 0)
        VarSet(VAR_RUSTBORO_CITY_STATE, 1);
}
unsigned HeExpCapType(void) { return VarGet(VAR_HE_LEVEL_CAP); }
unsigned char HeFastTraining(void) { return FlagGet(FLAG_HE_ANTI_GRINDING); }
void HeCoachRefill(void)
{
    gSpecialVar_Result = CountTotalItemQuantityInBag(ITEM_RARE_CANDY) < 10;
}
