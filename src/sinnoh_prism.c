#include "global.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "constants/species.h"
#include "sinnoh_prism.h"
#include "sinnoh_chapter.h"
#include "journey_ui.h"
#include "battle.h"
#include "battle_setup.h"
#include "battle_util.h"
#include "event_data.h"
#include "pokemon.h"
#include "constants/battle.h"
#include "constants/items.h"
#include "constants/opponents.h"

EWRAM_DATA u8 gSiPrismBoost = 0;
static u16 AvailableModes(void)
{
    u16 stage=VarGet(VAR_SI_STAGE);
    return stage>=18?3:stage>=13?2:stage>=2?1:0;
}
void SiPrismRepair(void)
{
    if(!SiIsSeason())return;
    if(AvailableModes() && !VarGet(VAR_SI_PRISM_WINS))
    {
        VarSet(VAR_SI_PRISM_WINS,1);VarSet(VAR_SI_PRISM_ENERGY,3);VarSet(VAR_SI_PRISM_MODE,1);
    }
    if(VarGet(VAR_SI_PRISM_ENERGY)>3)VarSet(VAR_SI_PRISM_ENERGY,3);
    if(VarGet(VAR_SI_PRISM_MODE)>AvailableModes())VarSet(VAR_SI_PRISM_MODE,AvailableModes());
}
void SiPrismRecharge(void)
{
    SiPrismRepair();
    if(SiIsSeason()&&AvailableModes())VarSet(VAR_SI_PRISM_ENERGY,3);
}
void SiPrismTrainerWin(u16 trainerId)
{
    if(!SiIsSeason()||!AvailableModes()||gBattleOutcome!=B_OUTCOME_WON
       ||trainerId<SI_TRAINER_FIRST||trainerId>=SI_TRAINER_FIRST+SI_TRAINER_COUNT
       ||HasTrainerBeenFought(trainerId))return;
    SiPrismRepair();
    if(VarGet(VAR_SI_PRISM_ENERGY)<3)VarSet(VAR_SI_PRISM_ENERGY,VarGet(VAR_SI_PRISM_ENERGY)+1);
}
void SiPrismCycle(s8 direction)
{
    u16 mode=VarGet(VAR_SI_PRISM_MODE),count=AvailableModes()+1;
    VarSet(VAR_SI_PRISM_MODE,(mode+count+direction)%count);
}
static bool8 Eligible(u32 battler)
{
    u16 mode;
    if(!SiIsSeason()||FlagGet(FLAG_HE_EASY_CATCH)||!VarGet(VAR_SI_PRISM_ENERGY)
       ||gLastUsedItem==ITEM_MASTER_BALL
       ||gBattleTypeFlags&(BATTLE_TYPE_TRAINER|BATTLE_TYPE_GHOST|BATTLE_TYPE_CATCH_TUTORIAL|BATTLE_TYPE_LINK|BATTLE_TYPE_SAFARI))
        return FALSE;
    mode=VarGet(VAR_SI_PRISM_MODE);
    return (mode==1&&AvailableModes()>=1&&gBattleMons[battler].status1!=0)
        ||(mode==2&&AvailableModes()>=2&&gBattleMons[battler].hp*4<=gBattleMons[battler].maxHP)
        ||(mode==3&&AvailableModes()>=3&&gBattleTurnCounter>=3);
}
void BS_SiPrismPrepareThrow(void)
{
    u32 target=GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
    if(!gBattleMons[target].hp)target=GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);
    gSiPrismBoost=Eligible(target)?2:0;
    // Battle callnative functions advance their own instruction pointer.
    gBattlescriptCurrInstr += 5;
}
u32 SiPrismApplyCapture(u32 odds,u32 wildBattler)
{
    if(Eligible(wildBattler))
    {
        VarSet(VAR_SI_PRISM_ENERGY,VarGet(VAR_SI_PRISM_ENERGY)-1);
        odds*=2;
    }
    gSiPrismBoost=0;
    return odds;
}
void SiPrismDraw(bool8 en)
{
    const u8 *names[]={COMPOUND_STRING("OFF"),COMPOUND_STRING("MESPRIT"),COMPOUND_STRING("AZELF"),COMPOUND_STRING("UXIE")};
    u8 i,mode=VarGet(VAR_SI_PRISM_MODE);
    HeUiCard(6,27,228,106);
    HeUiText(en?COMPOUND_STRING("LAKE PRISM"):COMPOUND_STRING("PRISMA DOS LAGOS"),14,31,2,33,1,0);
    for(i=0;i<3;i++){HeUiRect(190+i*12,32,9,9,12);if(i<VarGet(VAR_SI_PRISM_ENERGY))HeUiRect(191+i*12,33,7,7,9);}
    HeUiText(names[mode<4?mode:0],14,48,10,30,1,0);
    if(!AvailableModes())
        HeUiText(en?COMPOUND_STRING("Meet Rowan in Sandgem to receive it."):COMPOUND_STRING("Encontre Rowan em Sandgem para receber."),14,65,1,35,3,0);
    else
        HeUiText(en?COMPOUND_STRING("Capture formula x2; costs one charge.\nMesprit: target with a status.\nAzelf: target with 1/4 HP or less.\nUxie: after three full turns."):COMPOUND_STRING("Bonus na formula x2; gasta uma carga.\nMesprit: alvo com condicao de status.\nAzelf: alvo com 1/4 de HP ou menos.\nUxie: depois de tres turnos completos."),14,65,1,35,4,0);
    HeUiText(en?COMPOUND_STRING("New trainer win: +1 charge. LEFT/RIGHT."):COMPOUND_STRING("Vitoria inedita: +1 carga. ESQ/DIR."),8,136,1,37,1,0);
}
