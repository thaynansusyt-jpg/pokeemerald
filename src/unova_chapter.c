#include "global.h"
#include "main.h"
#include "event_data.h"
#include "overworld.h"
#include "load_save.h"
#include "rtc.h"
#include "palette.h"
#include "battle.h"
#include "script_pokemon_util.h"
#include "journey_ui.h"
#include "unova_chapter.h"
#include "constants/maps.h"
#include "constants/layouts.h"
#include "constants/heal_locations.h"
#include "constants/vars.h"
#include "constants/flags.h"
#include "constants/species.h"
#include "constants/battle.h"
#include "constants/rgb.h"
#define S(x) COMPOUND_STRING(x)
u8 UnIsSeason(void){return VarGet(VAR_HE_SEASON)==2;}
void UnInitializeSeason(void)
{
    SetWarpDestination(MAP_GROUP(MAP_UN_NUVEMA_BEDROOM),MAP_NUM(MAP_UN_NUVEMA_BEDROOM),WARP_ID_NONE,9,10);
    WarpIntoMap();SetLastHealLocationWarp(HEAL_LOCATION_UN_NUVEMAHOUSE);
    VarSet(VAR_UN_STAGE,0);VarSet(VAR_UN_BADGES,0);VarSet(VAR_UN_MEMORY,0);
    FlagSet(FLAG_RECEIVED_RUNNING_SHOES);FlagSet(FLAG_SYS_B_DASH);
}
u8 UnCurrentSeason(void)
{
    u8 month=GetMonth();
    // BW: Jan/May/Sep spring, Feb/Jun/Oct summer, Mar/Jul/Nov autumn, Apr/Aug/Dec winter.
    return month>=1&&month<=12?(month-1)%4:0;
}
const u8 *UnSeasonName(void)
{
    static const u8 *const names[2][4]={{S("SPRING"),S("SUMMER"),S("AUTUMN"),S("WINTER")},{S("PRIMAVERA"),S("VERAO"),S("OUTONO"),S("INVERNO")}};
    return names[gSaveBlock2Ptr->optionsLanguage!=0][UnCurrentSeason()];
}
const u8 *UnLayoutName(u16 layout)
{
    switch(layout){
#include "data/unova_map_names.h"
    default:return NULL;}
}
void UnSeasonPalette(u16 dest,u16 size)
{
    u16 i;u8 season=UnCurrentSeason();
    if(!UnIsSeason()||gMapHeader.mapType==MAP_TYPE_INDOOR||gMapHeader.mapType==MAP_TYPE_UNDERGROUND||dest!=0)return;
    // Only new Unova foliage bank 0 changes. NPCs, buildings and other regions retain their palettes.
    for(i=1;i<16 && i<size/2;i++)
    {
        u16 c=gPlttBufferUnfaded[i];u8 r=c&31,g=(c>>5)&31,b=(c>>10)&31;
        if(g<=r+2||g<=b+2)continue;
        if(season==0){r=r>1?r-1:r;g=g<30?g+1:g;}
        else if(season==2){r=min(31,g+5);g=max(3,g-6);b=max(1,b/2);}
        else if(season==3){r=min(31,12+g/2);b=min(31,15+g/2);g=min(31,14+g/2);}
        gPlttBufferUnfaded[i]=gPlttBufferFaded[i]=RGB(r,g,b);
    }
}
u16 UnWildSpecies(u16 species)
{
    static const u16 deer[]={SPECIES_DEERLING_SPRING,SPECIES_DEERLING_SUMMER,SPECIES_DEERLING_AUTUMN,SPECIES_DEERLING_WINTER};
    return UnIsSeason()&&species==SPECIES_DEERLING_SPRING?deer[UnCurrentSeason()]:species;
}
void UnPrepareGiftSave(void){CopyPartyAndObjectsFromSave();}
void UnSetHeal(void)
{
    u8 id=HEAL_LOCATION_UN_NUVEMAHOUSE;
    switch(gMapHeader.mapLayoutId)
    {
    case LAYOUT_UN_ACCUMULACENTER:id=HEAL_LOCATION_UN_ACCUMULACENTER;break;
    case LAYOUT_UN_STRIATONCENTER:id=HEAL_LOCATION_UN_STRIATONCENTER;break;
    case LAYOUT_UN_NACRENECENTER:id=HEAL_LOCATION_UN_NACRENECENTER;break;
    case LAYOUT_UN_CASTELIACENTER:id=HEAL_LOCATION_UN_CASTELIACENTER;break;
    case LAYOUT_UN_NIMBASACENTER:id=HEAL_LOCATION_UN_NIMBASACENTER;break;
    }
    SetLastHealLocationWarp(id);
}
void UnHeal(void)
{
    UnSetHeal();if(FlagGet(FLAG_UN_CGEAR))VarSet(VAR_UN_RESONANCE,3);
}
void UnResonancePulse(void)
{
    gSpecialVar_Result=VarGet(VAR_UN_RESONANCE);
}
unsigned UnApplyCapture(unsigned odds,u8 battler)
{
    u16 energy;
    if(!UnIsSeason()||!FlagGet(FLAG_UN_CGEAR)||FlagGet(FLAG_HE_EASY_CATCH))return odds;
    if(gBattleTypeFlags&(BATTLE_TYPE_TRAINER|BATTLE_TYPE_SAFARI|BATTLE_TYPE_CATCH_TUTORIAL))return odds;
    energy=VarGet(VAR_UN_RESONANCE);
    if(energy && gBattleTurnCounter>=2 && gBattleMons[battler].hp*2<=gBattleMons[battler].maxHP)
    {
        VarSet(VAR_UN_RESONANCE,energy-1);
        return odds*2;
    }
    return odds;
}
// Unova's journal uses completed chapter stages, not a second mutable quest state.
struct UnMission {const u8 *pt;const u8 *en;u8 node;};
static const struct UnMission sMissions[]={
 {S("Escolha um parceiro no seu quarto."),S("Choose your partner in your room."),0},
 {S("Visite Juniper no laboratorio."),S("Visit Juniper in her laboratory."),0},
 {S("Cruze a Rota 1 ate Accumula."),S("Cross Route 1 into Accumula."),1},
 {S("Encontre Bianca no norte da Rota 2."),S("Meet Bianca on northern Route 2."),2},
 {S("Encontre Cheren na escola Striaton."),S("Meet Cheren at Striaton school."),3},
 {S("Desafie os irmaos no ginasio."),S("Challenge the brothers at the Gym."),3},
 {S("Proteja Munna no Dreamyard."),S("Protect Munna in the Dreamyard."),4},
 {S("Leve os sonhos ao laboratorio Fennel."),S("Bring the dreams to Fennel lab."),3},
 {S("Recupere o Pokemon em Wellspring."),S("Recover the Pokemon in Wellspring."),5},
 {S("Encontre N em frente ao museu."),S("Meet N outside the museum."),6},
 {S("Desafie Lenora no museu-ginasio."),S("Challenge Lenora in her museum Gym."),6},
 {S("Investigue o alarme no museu."),S("Investigate the museum alarm."),6},
 {S("Siga Plasma por Pinwheel Forest."),S("Follow Plasma into Pinwheel Forest."),7},
 {S("Cruze Skyarrow ate Castelia City."),S("Cross Skyarrow into Castelia City."),8},
 {S("Liberte Munna na casa junto ao cais."),S("Free Munna in the house by the dock."),9},
 {S("Desafie Burgh no ginasio Castelia."),S("Challenge Burgh in Castelia Gym."),9},
 {S("Leve o fragmento ao cais central."),S("Bring the fragment to the main dock."),9},
 {S("Siga ao norte de Castelia pela Rota 4."),S("Go north of Castelia through Route 4."),10},
 {S("Fale com a pesquisadora em Nimbasa."),S("Speak with the researcher in Nimbasa."),11},
 {S("Nimbasa liberada! Explore a cidade."),S("Nimbasa unlocked! Explore the city."),11}
};
static const u8 sNodes[][2]={{183,100},{174,79},{164,65},{155,51},{177,43},{128,46},{105,52},{79,62},{57,87},{34,101},{34,72},{34,42}};
static u8 sMissionPage,sBlink,sBlinkFrame;
static void DrawMission(void)
{
    u8 i,stage=min(VarGet(VAR_UN_STAGE),ARRAY_COUNT(sMissions)-1);
    bool8 pt=gSaveBlock2Ptr->optionsLanguage!=0;
    const struct UnMission *m=&sMissions[stage];
    HeUiBegin();HeUiRect(0,0,240,160,1);HeUiRect(0,0,240,25,2);
    HeUiText(pt?S("UNOVA / MAPA DE MISSOES"):S("UNOVA / MISSION MAP"),8,4,11,30,1,0);
    if(!sMissionPage)
    {
        HeUiRect(10,29,220,81,15);
        for(i=0;i<ARRAY_COUNT(sNodes);i++)
        {
            if(i)HeUiLine(sNodes[i-1][0],sNodes[i-1][1],sNodes[i][0],sNodes[i][1],3);
            HeUiRect(sNodes[i][0]-3,sNodes[i][1]-3,7,7,i<=m->node?14:12);
        }
        HeUiText(S("NIMBASA"),49,35,7,10,1,0);
        HeUiText(S("CASTELIA"),43,91,7,10,1,0);
        HeUiText(S("NACRENE"),85,34,7,10,1,0);
        HeUiText(S("NUVEMA"),180,105,7,9,1,0);
        if(sBlink)
        {
            HeUiLine(sNodes[m->node][0]-6,sNodes[m->node][1]-6,sNodes[m->node][0]+6,sNodes[m->node][1]+6,9);
            HeUiLine(sNodes[m->node][0]+6,sNodes[m->node][1]-6,sNodes[m->node][0]-6,sNodes[m->node][1]+6,9);
        }
        HeUiText(pt?S("DESTINO ATUAL:"):S("CURRENT TARGET:"),8,111,9,28,1,0);
        HeUiText(pt?m->pt:m->en,8,123,11,37,2,0);
    }
    else
    {
        HeUiCard(8,31,224,111);
        HeUiText(pt?S("COMO SEGUIR A MISSAO"):S("HOW TO FOLLOW THE MISSION"),14,36,2,34,1,0);
        HeUiText(pt?m->pt:m->en,14,54,1,34,3,0);
        HeUiText(pt?S("O X piscante marca a regiao.\nSiga as rotas e fale com NPCs.\nO C-Gear ganha energia ao curar."):S("Blinking X marks the region.\nFollow roads and talk to NPCs.\nC-Gear energy refills on healing."),14,86,1,34,3,0);
    }
    HeUiRect(0,145,240,15,2);
    HeUiText(pt?S("A: detalhes/mapa B: voltar SEL: ajustes"):S("A: details/map B: back SEL: settings"),7,144,11,38,1,0);
    HeUiPresent();
}
static void MissionMain(void)
{
    if(HeUiBusy())return;
    if(JOY_NEW(B_BUTTON)){HeUiClose();SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);return;}
    if(JOY_NEW(SELECT_BUTTON)){extern void HeOpenJourneyRules(void);HeOpenJourneyRules();return;}
    if(JOY_NEW(A_BUTTON)){sMissionPage=!sMissionPage;sBlink=1;sBlinkFrame=0;DrawMission();return;}
    if(!sMissionPage && ++sBlinkFrame >= 24)
    {
        sBlinkFrame=0;
        sBlink^=1;
        DrawMission();
    }
}
void UnOpenMission(void){sMissionPage=0;sBlink=1;sBlinkFrame=0;HeUiInit(FALSE);DrawMission();SetMainCallback2(MissionMain);}
