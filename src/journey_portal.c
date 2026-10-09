#include "global.h"
#include "main.h"
#include "journey_ui.h"
#include "unova_chapter.h"
#include "hoenn_rules.h"
#include "sinnoh_chapter.h"
#include "event_data.h"
#include "save.h"
#include "load_save.h"
#include "item.h"
#include "sound.h"
#include "string_util.h"
#include "overworld.h"
#include "palette.h"
#include "option_menu.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/characters.h"
#include "constants/flags.h"
#include "constants/vars.h"
#define S(x) COMPOUND_STRING(x)
extern void CB2_ReinitMainMenu(void);
extern void CB2_ContinueSavedGame(void);
static EWRAM_DATA u8 sRow, sHomeSave, sGiftHome, sCodeLength, sKey, sMessage;
static EWRAM_DATA u8 sCode[9];
static EWRAM_DATA bool8 sConfirmNew;
static void HomeMain(void);
static void HubMain(void);
static void GiftMain(void);
static bool8 Portuguese(void) {return gSaveBlock2Ptr->optionsLanguage != 0;}
static const u8 *Pick(const u8 *pt,const u8 *en){return Portuguese()?pt:en;}
static void Skyline(void)
{
    u8 i;
    HeUiRect(0,0,240,160,1);
    for(i=0;i<15;i++)
    {
        s16 x=i*17,y=43+(i*13%36),h=82-y;
        HeUiRect(x,y,14,h,2);
        HeUiRect(x+4,y-5,6,5,2);
        HeUiRect(x+3,y+5,2,3,9);HeUiRect(x+9,y+5,2,3,7);
    }
    HeUiRect(0,82,240,2,14);
    HeUiRect(0,84,240,76,15);
}
static void DrawHome(void)
{
    u8 i,first=sHomeSave?0:1;
    const u8 *const labelsPt[]={S("CONTINUAR"),S("NOVO JOGO"),S("AJUSTES"),S("MYSTERY GIFT")};
    const u8 *const labelsEn[]={S("CONTINUE"),S("NEW GAME"),S("SETTINGS"),S("MYSTERY GIFT")};
    HeUiBegin();Skyline();
    HeUiText(S("HOENN EXPANSION"),18,4,11,30,1,0);
    HeUiText(Pick(S("TRES REGIOES. A SUA JORNADA."),S("THREE REGIONS. YOUR JOURNEY.")),18,21,7,36,1,0);
    if(sHomeSave)
    {
        HeUiText(gSaveBlock2Ptr->playerName,18,64,11,10,1,0);
        HeUiText(VarGet(VAR_HE_SEASON)==2?S("UNOVA"):SiIsSeason()?S("SINNOH"):S("HOENN"),105,64,9,16,1,0);
    }
    for(i=first;i<4;i++)
    {
        s16 x=12+((i-first)%2)*116,y=90+((i-first)/2)*25;
        HeUiRect(x,y,108,22,sRow==i?14:2);
        HeUiRect(x,y,3,22,sRow==i?9:3);
        HeUiText(Portuguese()?labelsPt[i]:labelsEn[i],x+8,y+3,11,17,1,0);
    }
    HeUiText(sConfirmNew?Pick(S("Substituir o save? A: sim  B: voltar"),S("Replace this save? A: yes  B: back")):Pick(S("SETAS: escolher   A: abrir"),S("ARROWS: choose   A: open")),10,142,7,37,1,0);
    HeUiPresent();
}
void HeHomeOpen(u8 hasSave)
{
    sHomeSave=hasSave;sRow=hasSave?0:1;sConfirmNew=FALSE;
    HeUiInit(FALSE);DrawHome();SetMainCallback2(HomeMain);
}
static void HomeMain(void)
{
    if(HeUiBusy())return;
    if(sConfirmNew)
    {
        if(JOY_NEW(B_BUTTON)){sConfirmNew=FALSE;DrawHome();}
        else if(JOY_NEW(A_BUTTON)){HeUiClose();HeHomeStartNewGame();}
        return;
    }
    if(JOY_NEW(DPAD_DOWN|DPAD_RIGHT)){sRow=sRow==3?(sHomeSave?0:1):sRow+1;DrawHome();}
    else if(JOY_NEW(DPAD_UP|DPAD_LEFT)){sRow=sRow==(sHomeSave?0:1)?3:sRow-1;DrawHome();}
    else if(JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        if(sRow==0){HeUiClose();SetMainCallback2(CB2_ContinueSavedGame);}
        else if(sRow==1){if(sHomeSave){sConfirmNew=TRUE;DrawHome();}else{HeUiClose();HeHomeStartNewGame();}}
        else if(sRow==2){HeUiClose();gMain.savedCallback=CB2_ReinitMainMenu;SetMainCallback2(CB2_InitOptionMenu);}
        else HeGiftOpen(TRUE);
    }
}
// Every gift is an atomic single-item reward: a full bag never consumes its code.
struct JourneyGift {const u8 *code;u16 item;u16 count;};
static const struct JourneyGift sGifts[18]={
    {S("VIAJAR01"),ITEM_POKE_BALL,30}, {S("VIAJAR02"),ITEM_POTION,20},
    {S("VIAJAR03"),ITEM_RARE_CANDY,20}, {S("VIAJAR04"),ITEM_GREAT_BALL,20},
    {S("VIAJAR05"),ITEM_SUPER_POTION,20}, {S("VIAJAR06"),ITEM_FULL_HEAL,20},
    {S("VIAJAR07"),ITEM_HEART_SCALE,10}, {S("VIAJAR08"),ITEM_LUCKY_EGG,1},
    {S("CAMPEA01"),ITEM_ULTRA_BALL,99}, {S("CAMPEA02"),ITEM_DUSK_BALL,50},
    {S("CAMPEA03"),ITEM_QUICK_BALL,50}, {S("CAMPEA04"),ITEM_TIMER_BALL,50},
    {S("CAMPEA05"),ITEM_FULL_RESTORE,50}, {S("CAMPEA06"),ITEM_MAX_REVIVE,30},
    {S("CAMPEA07"),ITEM_RARE_CANDY,99}, {S("CAMPEA08"),ITEM_ABILITY_CAPSULE,5},
    {S("CAMPEA09"),ITEM_ABILITY_PATCH,3}, {S("CAMPEA10"),ITEM_MASTER_BALL,1}
};
static bool8 Postgame(void)
{
    if(UnIsSeason())return FlagGet(FLAG_UN_CHAMPION); // Castelia is a chapter end, not the League.
    if(SiIsSeason())return VarGet(VAR_SI_STAGE)>=29;
    return FlagGet(FLAG_IS_CHAMPION);
}
u8 HeGiftRedeem(u8 gift)
{
    u16 var,mask,old;
    if(gift>=18)return 1;
    var=gift<16?VAR_HE_GIFT_LOW:VAR_HE_GIFT_HIGH;
    mask=1<<(gift%16);old=VarGet(var);
    if(old&mask)return 2;
    if(gift>=8&&!Postgame())return 3;
    if(!AddBagItem(sGifts[gift].item,sGifts[gift].count))return 4;
    VarSet(var,old|mask);
    return 5;
}
static const u8 sKeyboard[] = _("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
static void DrawGift(void)
{
    u8 i;
    const u8 *const pt[]={S("Digite um codigo de 8 caracteres."),S("Codigo desconhecido. Confira as letras."),S("Este presente ja foi recebido."),S("Este codigo exige vencer a Liga."),S("Sem espaco na Bolsa. Libere espaco."),S("Presente recebido! Salve a jornada."),S("Comece uma jornada e salve primeiro."),S("Salvando o presente...")};
    const u8 *const en[]={S("Enter an 8-character code."),S("Unknown code. Check the letters."),S("You already received this gift."),S("This code requires winning the League."),S("Bag full. Make room and try again."),S("Gift received! Save your journey."),S("Start a journey and save first."),S("Saving your gift...")};
    HeUiBegin();HeUiRect(0,0,240,160,1);
    HeUiRect(0,0,240,25,2);HeUiText(S("MYSTERY GIFT"),9,4,11,30,1,0);
    HeUiText(Portuguese()?pt[sMessage]:en[sMessage],9,26,7,37,1,0);
    HeUiRect(8,45,224,19,15);
    HeUiText(sCode,72,46,9,9,1,0);
    for(i=0;i<36;i++)
    {
        u8 ch[2]={sKeyboard[i],EOS};s16 x=28+(i%6)*32,y=66+(i/6)*12;
        if(sKey==i)HeUiRect(x-4,y+2,23,12,14);
        HeUiText(ch,x+4,y,11,1,1,0);
    }
    HeUiText(Pick(S("A: letra  L: apagar  START: receber"),S("A: letter  L: erase  START: redeem")),9,139,7,37,1,0);
    HeUiText(Pick(S("B: voltar   1 resgate por save"),S("B: back     1 claim per save")),9,151,7,37,1,0);
    HeUiPresent();
}
void HeGiftOpen(u8 home)
{
    sGiftHome=home;sCodeLength=sKey=0;sCode[0]=EOS;
    sMessage=home&&!sHomeSave?6:0;
    if(home&&sHomeSave)UnPrepareGiftSave();
    HeUiInit(FALSE);DrawGift();SetMainCallback2(GiftMain);
}
static void GiftMain(void)
{
    u8 i;
    if(HeUiBusy())return;
    if(JOY_NEW(B_BUTTON)){HeUiClose();SetMainCallback2(sGiftHome?CB2_ReinitMainMenu:CB2_ReturnToFieldWithOpenMenu);return;}
    if(sMessage==6)return;
    if(JOY_NEW(DPAD_RIGHT))sKey=(sKey/6)*6+(sKey+1)%6;
    else if(JOY_NEW(DPAD_LEFT))sKey=(sKey/6)*6+(sKey+5)%6;
    else if(JOY_NEW(DPAD_DOWN))sKey=(sKey+6)%36;
    else if(JOY_NEW(DPAD_UP))sKey=(sKey+30)%36;
    else if(JOY_NEW(L_BUTTON)){if(sCodeLength)sCode[--sCodeLength]=EOS;sMessage=0;}
    else if(JOY_NEW(A_BUTTON)){if(sCodeLength<8){sCode[sCodeLength++]=sKeyboard[sKey];sCode[sCodeLength]=EOS;sMessage=0;}}
    else if(JOY_NEW(START_BUTTON))
    {
        sMessage=1;
        for(i=0;i<18;i++)if(StringCompare(sCode,sGifts[i].code)==0){sMessage=HeGiftRedeem(i);break;}
        if(sMessage==5&&sGiftHome)
        {
            // Serialized party/objects were loaded before opening the home gift UI.
            // Save uses the existing native two-slot transaction and sector checksums.
            if(TrySavingData(SAVE_NORMAL)!=SAVE_STATUS_OK)sMessage=4;
        }
        PlaySE(SE_SELECT);
    }
    else return;
    DrawGift();
}
static void Icon(u8 icon,s16 x,s16 y,u8 c)
{
    s16 i;
    if(icon==0){HeUiRect(x+4,y+2,17,20,c);HeUiRect(x+8,y,9,3,c);HeUiRect(x+7,y+11,11,7,2);HeUiRect(x+4,y+7,17,2,9);}
    else if(icon==1){HeUiRect(x+2,y+5,22,14,c);HeUiRect(x+6,y+1,14,22,c);HeUiRect(x+2,y+11,22,3,1);HeUiRect(x+10,y+8,7,8,1);HeUiRect(x+12,y+10,3,4,11);}
    else if(icon==2){HeUiRect(x+1,y+1,24,22,c);HeUiRect(x+3,y+3,20,18,1);for(i=3;i<21;i+=5)HeUiLine(x+3,y+i,x+22,y+i,3);HeUiLine(x+12,y+11,x+21,y+3,9);HeUiRect(x+9,y+12,3,3,14);}
    else if(icon==3){HeUiRect(x+5,y+1,16,22,c);HeUiRect(x+8,y+5,10,9,1);HeUiRect(x+9,y+17,3,3,9);HeUiRect(x+15,y+17,3,3,9);}
    else if(icon==4){HeUiLine(x,y+3,x+8,y+1,c);HeUiLine(x+8,y+1,x+16,y+5,c);HeUiLine(x+16,y+5,x+24,y+1,c);for(i=0;i<21;i++)HeUiLine(x,y+i+3,x+8,y+i+1,c);HeUiRect(x+9,y+4,8,18,c);HeUiRect(x+18,y+2,7,19,c);HeUiLine(x+10,y+7,x+15,y+14,10);HeUiLine(x+15,y+7,x+10,y+14,10);}
    else if(icon==5){HeUiRect(x+3,y+8,21,15,c);HeUiRect(x+1,y+6,25,4,c);HeUiRect(x+11,y+6,5,17,9);HeUiLine(x+13,y+6,x+4,y,9);HeUiLine(x+13,y+6,x+22,y,9);}
    else if(icon==6){HeUiRect(x+8,y+1,10,23,c);HeUiRect(x+2,y+7,23,11,c);HeUiRect(x+10,y+9,6,6,1);}
    else if(icon==7){HeUiRect(x+1,y+3,25,18,c);HeUiRect(x+4,y+6,8,10,1);HeUiRect(x+5,y+8,6,6,7);for(i=6;i<18;i+=4)HeUiRect(x+15,y+i,9,2,1);}
    else {HeUiRect(x+3,y+1,22,22,c);HeUiRect(x+7,y+2,13,7,1);HeUiRect(x+7,y+14,13,8,7);}
}
static void DrawHub(void)
{
    u8 i;
    const u8 *const pt[]={S("Bolsa"),S("Pokemon"),S("DexNav"),S("Pokedex"),S("Missoes"),S("Presentes"),S("Ajustes"),S("Cartao"),S("Salvar")};
    const u8 *const en[]={S("Bag"),S("Pokemon"),S("DexNav"),S("Pokedex"),S("Missions"),S("Gifts"),S("Settings"),S("Card"),S("Save")};
    HeUiBegin();HeUiRect(0,0,240,160,1);HeUiRect(0,0,240,25,2);
    HeUiText(S("UNOVA / C-GEAR"),8,3,11,26,1,0);HeUiText(UnSeasonName(),174,3,9,10,1,0);
    // C-Gear resonance: three rechargeable charges; not a wireless connection.
    if(FlagGet(FLAG_UN_CGEAR))
    {
        u16 energy=VarGet(VAR_UN_RESONANCE); if(energy>3) energy=3;
        for(i=0;i<3;i++)HeUiRect(191+i*11,18,8,5,i<energy?9:3);
    }

    for(i=0;i<9;i++)
    {
        s16 x=8+(i%3)*77,y=29+(i/3)*35;
        HeUiRect(x,y,70,31,i==sRow?14:15);
        HeUiRect(x,y,70,1,i==sRow?9:3);Icon(i,x+4,y+3,i==sRow?11:7);
        HeUiText(Portuguese()?pt[i]:en[i],x+31,y+10,11,6,1,0);
    }
    HeUiText(sMessage==5?Pick(S("Jornada salva."),S("Journey saved.")):sMessage==4?Pick(S("Sem encontros aqui. Explore uma rota."),S("No encounters here. Try a route.")):Pick(S("SETAS: escolher   A: abrir   B: sair"),S("ARROWS: choose   A: open   B: leave")),8,139,7,37,1,0);
    HeUiText(Pick(S("Corrida e captura: no painel Ajustes"),S("Run and catch options: Settings")),8,151,7,37,1,0);
    HeUiPresent();
}
void UnOpenHub(void){sRow=sMessage=0;HeUiInit(FALSE);DrawHub();SetMainCallback2(HubMain);}
static void HubMain(void)
{
    if(HeUiBusy())return;
    if(JOY_NEW(B_BUTTON|START_BUTTON)){HeUiClose();HeHubAction(9);return;}
    if(JOY_NEW(DPAD_RIGHT)){sRow=(sRow/3)*3+(sRow+1)%3;DrawHub();}
    else if(JOY_NEW(DPAD_LEFT)){sRow=(sRow/3)*3+(sRow+2)%3;DrawHub();}
    else if(JOY_NEW(DPAD_DOWN)){sRow=(sRow+3)%9;DrawHub();}
    else if(JOY_NEW(DPAD_UP)){sRow=(sRow+6)%9;DrawHub();}
    else if(JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        if(sRow==8){sMessage=TrySavingData(SAVE_NORMAL)==SAVE_STATUS_OK?5:4;DrawHub();}
        else if(sRow==5)HeGiftOpen(FALSE);
        else if(sRow==6)HeOpenJourneyRules();
        else if(sRow==4)UnOpenMission();
        else{HeUiClose();HeHubAction(sRow);}
    }
}
