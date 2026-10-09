#include "global.h"
#include "journey_ui.h"
#include "hoenn_rules.h"
#include "sinnoh_prism.h"
#include "sinnoh_chapter.h"
#include "hoenn_expansion.h"
#include "main.h"
#include "overworld.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "sound.h"
#include "scanline_effect.h"
#include "dma3.h"
#include "task.h"
#include "sprite.h"
#include "palette.h"
#include "bg.h"
#include "window.h"
#include "text.h"
#include "menu.h"
#include "constants/vars.h"
#include "constants/flags.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/characters.h"

// Native bitmap UI: no heap allocation, no changes to the save layout.
// Coordinates form a schematic of Sinnoh, not a reproduction of the DS town map.
struct SiMapNode { u8 x, y; const u8 *name; };
static const struct SiMapNode sNodes[] = {
    {43,119,COMPOUND_STRING("TWINLEAF")}, {61,117,COMPOUND_STRING("SANDGEM")},
    {60,99,COMPOUND_STRING("JUBILIFE")}, {84,99,COMPOUND_STRING("OREBURGH")},
    {58,79,COMPOUND_STRING("FLOAROMA")}, {75,79,COMPOUND_STRING("WINDWORKS")},
    {80,61,COMPOUND_STRING("ETERNA")}, {105,95,COMPOUND_STRING("HEARTHOME")},
    {118,78,COMPOUND_STRING("SOLACEON")}, {142,61,COMPOUND_STRING("VEILSTONE")},
    {127,113,COMPOUND_STRING("PASTORIA")}, {106,59,COMPOUND_STRING("CELESTIC")},
    {29,98,COMPOUND_STRING("CANALAVE")}, {88,39,COMPOUND_STRING("SNOWPOINT")},
    {149,100,COMPOUND_STRING("SUNYSHORE")}, {149,78,COMPOUND_STRING("LIGA / LEAGUE")},
    {26,117,COMPOUND_STRING("LAKE VERITY")}, {139,89,COMPOUND_STRING("LAKE VALOR")},
    {71,39,COMPOUND_STRING("LAKE ACUITY")}, {94,71,COMPOUND_STRING("SPEAR PILLAR")},
    {96,77,COMPOUND_STRING("DISTORTION WORLD")}, {95,64,COMPOUND_STRING("HALL OF ORIGIN")},
    {132,41,COMPOUND_STRING("FIGHT AREA")}, {146,45,COMPOUND_STRING("RESORT AREA")},
    {121,35,COMPOUND_STRING("SURVIVAL AREA")}, {132,32,COMPOUND_STRING("ROUTE 227")},
    {145,88,COMPOUND_STRING("TURNBACK CAVE")}, {88,35,COMPOUND_STRING("TEMPLE")}
};
static const u8 sRoads[][2] = {
    {0,1},{0,16},{1,2},{2,3},{2,4},{2,12},{4,5},{4,6},{6,11},{6,13},
    {3,7},{7,8},{8,9},{8,11},{9,17},{17,10},{10,7},{10,14},{14,15},
    {13,18},{7,19},{19,20},{19,21},{15,22},{22,23},{22,24},{24,25},{17,26}
};
struct SiMission {u8 node; const u8 *pt, *en;};
#define M(n,pt,en) {n,COMPOUND_STRING(pt),COMPOUND_STRING(en)}
static const struct SiMission sMissions[] = {
 M(0,"Escolha seu primeiro parceiro.","Choose your first partner."),
 M(1,"Encontre Rowan no laboratorio.","Meet Rowan at the laboratory."),
 M(16,"Investigue o coletor no lago.","Investigate the lake collector."),
 M(2,"Procure Looker na escola.","Find Looker at the school."),
 M(3,"Investigue o museu e a mina.","Investigate the museum and mine."),
 M(3,"Desligue o coletor: C, A, B.","Disable the collector: C, A, B."),
 M(3,"Desafie Roark no ginasio.","Challenge Roark at the Gym."),
 M(5,"Interrompa Mars nas turbinas.","Stop Mars at the wind turbines."),
 M(6,"Desafie Gardenia no ginasio.","Challenge Gardenia at the Gym."),
 M(6,"Encontre Jupiter no predio.","Find Jupiter in Galactic's base."),
 M(7,"Desafie Fantina no ginasio.","Challenge Fantina at the Gym."),
 M(9,"Desafie Maylene no ginasio.","Challenge Maylene at the Gym."),
 M(17,"Enfrente Saturn no Lago Valor.","Face Saturn at Lake Valor."),
 M(10,"Desafie Wake no ginasio.","Challenge Wake at the Gym."),
 M(11,"Converse com Cynthia.","Talk to Cynthia."),
 M(12,"Desafie Byron no ginasio.","Challenge Byron at the Gym."),
 M(12,"Procure Rowan na biblioteca.","Meet Rowan at the library."),
 M(18,"Enfrente Saturn no Lago Acuity.","Face Saturn at Lake Acuity."),
 M(13,"Desafie Candice no ginasio.","Challenge Candice at the Gym."),
 M(9,"Enfrente Cyrus no HQ Galactico.","Face Cyrus at Galactic HQ."),
 M(19,"Alcance o cume do Mt. Coronet.","Reach the summit of Mt. Coronet."),
 M(20,"Enfrente Cyrus e restaure Sinnoh.","Face Cyrus and restore Sinnoh."),
 M(20,"Escolha o futuro de Sinnoh.","Choose Sinnoh's future."),
 M(14,"Desafie Volkner no ginasio.","Challenge Volkner at the Gym."),
 M(15,"Elite Four: enfrente Aaron.","Elite Four: face Aaron."),
 M(15,"Elite Four: enfrente Bertha.","Elite Four: face Bertha."),
 M(15,"Elite Four: enfrente Flint.","Elite Four: face Flint."),
 M(15,"Elite Four: enfrente Lucian.","Elite Four: face Lucian."),
 M(15,"Desafie a campea Cynthia.","Challenge Champion Cynthia.")
};
struct SiLegendTarget {u16 flag; u8 node; const u8 *name;};
static const struct SiLegendTarget sLegends[] = {
 {FLAG_SI_CAUGHT_DIALGA,19,COMPOUND_STRING("DIALGA")},
 {FLAG_SI_CAUGHT_PALKIA,19,COMPOUND_STRING("PALKIA")},
 {FLAG_SI_CAUGHT_GIRATINA,20,COMPOUND_STRING("GIRATINA")},
 {FLAG_SI_CAUGHT_ARCEUS,21,COMPOUND_STRING("ARCEUS")},
 {FLAG_SI_CAUGHT_UXIE,18,COMPOUND_STRING("UXIE")},
 {FLAG_SI_CAUGHT_MESPRIT,16,COMPOUND_STRING("MESPRIT")},
 {FLAG_SI_CAUGHT_AZELF,17,COMPOUND_STRING("AZELF")},
 {FLAG_SI_CAUGHT_REGIGIGAS,27,COMPOUND_STRING("REGIGIGAS")},
 {FLAG_SI_CAUGHT_HEATRAN,25,COMPOUND_STRING("HEATRAN")},
 {FLAG_SI_CAUGHT_CRESSELIA,26,COMPOUND_STRING("CRESSELIA")}
};
#undef M
static u8 sPage, sLegend, sDetailScroll;
static u16 sStage;
static u8 Target(void)
{
    if(sStage<ARRAY_COUNT(sMissions))return sMissions[sStage].node;
    if(sLegend<ARRAY_COUNT(sLegends))return sLegends[sLegend].node;
    return 255;
}
static void SelectLegend(s8 dir)
{
    u8 i, index=sLegend;
    for(i=0;i<ARRAY_COUNT(sLegends);i++)
    {
        index=(index+ARRAY_COUNT(sLegends)+dir)%ARRAY_COUNT(sLegends);
        if(!FlagGet(sLegends[index].flag)) {sLegend=index;return;}
    }
    sLegend=ARRAY_COUNT(sLegends);
}
static void DrawMap(void)
{
    u16 x,y,i; u8 target=Target();
    HeUiCard(6,27,151,106);
    HeUiRect(8,29,147,102,3);
    for(y=31;y<130;y+=6)for(x=10;x<154;x+=9)HeUiPixel(x+(y%3),y,14);
    // Coastline, northern snow and Mt. Coronet.
    for(y=37;y<122;y++)
    {
        u8 left=y<60?50:y<85?38:22;
        u8 right=y<60?111:y<86?147:152;
        HeUiRect(left,y,right-left,1,y<48?7:4);
        HeUiPixel(left,y,5);HeUiPixel(right,y,5);
    }
    HeUiRect(119,30,32,20,4);HeUiRect(118,31,1,19,5);
    for(y=46;y<107;y++){u8 middle=91+(y%13)/4;HeUiRect(middle,y,9,1,12);HeUiPixel(middle+3,y,6);}
    for(i=0;i<ARRAY_COUNT(sRoads);i++)
    {
        const struct SiMapNode *a=&sNodes[sRoads[i][0]],*b=&sNodes[sRoads[i][1]];
        HeUiLine(a->x,a->y+1,b->x,b->y+1,5);HeUiLine(a->x,a->y,b->x,b->y,6);
    }
    for(i=0;i<ARRAY_COUNT(sNodes);i++)
    {
        HeUiRect(sNodes[i].x-2,sNodes[i].y-2,5,5,1);HeUiRect(sNodes[i].x-1,sNodes[i].y-1,3,3,i<16?9:7);
    }
    if(target!=255)
    {
        x=sNodes[target].x;y=sNodes[target].y;
        HeUiRect(x-5,y-5,11,11,11);
        for(i=0;i<3;i++){HeUiLine(x-4,y-4+i,x+4,y+4-i,10);HeUiLine(x-4,y+4-i,x+4,y-4+i,10);}
    }
}
static void Draw(void);
extern const u8 SI_C_Text_Goal10[];
extern const u8 SI_C_Text_Goal11[];
extern const u8 SI_C_Text_Goal12[];
extern const u8 SI_C_Text_Goal13[];
extern const u8 SI_C_Text_Goal14[];
extern const u8 SI_C_Text_Goal15[];
extern const u8 SI_C_Text_Goal16[];
extern const u8 SI_C_Text_Goal17[];
extern const u8 SI_C_Text_Goal18[];
extern const u8 SI_C_Text_Goal19[];
extern const u8 SI_C_Text_Goal20[];
extern const u8 SI_C_Text_Goal21[];
extern const u8 SI_C_Text_Goal22[];
extern const u8 SI_C_Text_Goal23[];
extern const u8 SI_C_Text_Goal24[];
extern const u8 SI_C_Text_Goal25[];
extern const u8 SI_C_Text_Goal26[];
extern const u8 SI_C_Text_Goal27[];
extern const u8 SI_C_Text_Goal28[];
extern const u8 SI_C_Text_Goal29[];
extern const u8 SI_C_Text_Goal7[];
extern const u8 SI_C_Text_Goal8[];
extern const u8 SI_C_Text_Goal9[];
extern const u8 SI_Text_Goal1[];
extern const u8 SI_Text_Goal2[];
extern const u8 SI_Text_Goal3[];
extern const u8 SI_Text_Goal4[];
extern const u8 SI_Text_Goal5[];
extern const u8 SI_Text_Goal6[];
static const u8 *const sGoals[] = {SI_Text_Goal1, SI_Text_Goal1, SI_Text_Goal2, SI_Text_Goal3, SI_Text_Goal4, SI_Text_Goal5, SI_Text_Goal6, SI_C_Text_Goal7, SI_C_Text_Goal8, SI_C_Text_Goal9, SI_C_Text_Goal10, SI_C_Text_Goal11, SI_C_Text_Goal12, SI_C_Text_Goal13, SI_C_Text_Goal14, SI_C_Text_Goal15, SI_C_Text_Goal16, SI_C_Text_Goal17, SI_C_Text_Goal18, SI_C_Text_Goal19, SI_C_Text_Goal20, SI_C_Text_Goal21, SI_C_Text_Goal22, SI_C_Text_Goal23, SI_C_Text_Goal24, SI_C_Text_Goal25, SI_C_Text_Goal26, SI_C_Text_Goal27, SI_C_Text_Goal28, SI_C_Text_Goal29};

static void Draw(void)
{
    u8 i, target=Target(); bool8 en=gSaveBlock2Ptr->optionsLanguage==0;
    HeUiBegin();
    HeUiRect(0,0,240,23,1);HeUiRect(0,23,240,1,8);
    HeUiText(en?COMPOUND_STRING("SINNOH / JOURNAL"):COMPOUND_STRING("SINNOH / DIARIO"),8,3,11,24,1,0);
    for(i=0;i<8;i++){HeUiRect(168+i*8,8,6,7,2);if(i<VarGet(VAR_SI_BADGES))HeUiRect(169+i*8,9,4,5,9);}
    if(!sPage)
    {
        DrawMap();HeUiCard(162,27,72,106);
        HeUiText(en?COMPOUND_STRING("DESTINATION"):COMPOUND_STRING("DESTINO"),166,32,2,11,1,0);
        HeUiText(target==255?COMPOUND_STRING("SINNOH"):target==15?(en?COMPOUND_STRING("LEAGUE"):COMPOUND_STRING("LIGA")):target==20?(en?COMPOUND_STRING("DISTORTION WORLD"):COMPOUND_STRING("MUNDO DISTORCIDO")):sNodes[target].name,166,49,1,11,3,0);
        HeUiRect(166,91,64,1,13);
        HeUiText(sStage<29?(en?COMPOUND_STRING("STORY"):COMPOUND_STRING("HISTORIA")):(en?COMPOUND_STRING("POST-GAME"):COMPOUND_STRING("POS-JOGO")),166,96,2,11,1,0);
        if(sStage>=29 && sLegend<ARRAY_COUNT(sLegends))HeUiText(sLegends[sLegend].name,166,113,10,11,1,0);
        HeUiText(sStage<29?(en?sMissions[sStage].en:sMissions[sStage].pt):(sLegend<ARRAY_COUNT(sLegends)?(en?COMPOUND_STRING("Catch the marked legendary."):COMPOUND_STRING("Capture o lendario marcado.")):(en?COMPOUND_STRING("All ten legends caught!"):COMPOUND_STRING("Dez lendarios capturados!"))),8,135,1,37,1,0);
    }
    else if(sPage==2)
    {
        SiPrismDraw(en);
    }
    else
    {
        HeUiCard(6,27,228,106);
        HeUiText(en?COMPOUND_STRING("CURRENT MISSION"):COMPOUND_STRING("MISSAO ATUAL"),13,31,2,35,1,0);
        if(sStage<29)HeUiText(HeLocalize(sGoals[sStage]),13,49,1,35,5,sDetailScroll);
        else if(sLegend<ARRAY_COUNT(sLegends))
        {
            HeUiText(sLegends[sLegend].name,13,49,10,35,1,0);
            HeUiText(en?COMPOUND_STRING("Follow the X on the map.\nTalk to guides to enter special\nplaces. Run or defeat it to retry.\nArceus needs Dialga, Palkia and\nGiratina caught first."):COMPOUND_STRING("Siga o X marcado no mapa.\nConverse com os guias para entrar\nnos locais especiais. Fugir permite\ntentar novamente. Arceus exige\nDialga, Palkia e Giratina capturados."),13,66,1,35,4,sDetailScroll);
        }
        else HeUiText(en?COMPOUND_STRING("Story and legendary encounters\ncomplete! Enjoy exploring Sinnoh."):COMPOUND_STRING("Historia e capturas concluidas!\nExplore Sinnoh com sua equipe."),13,55,1,35,4,0);
        HeUiText(en?COMPOUND_STRING("UP/DOWN: read   A: map"):COMPOUND_STRING("CIMA/BAIXO: ler   A: mapa"),8,135,1,37,1,0);
    }
    HeUiRect(0,151,240,9,1);
    HeUiText(sStage>=29&&!sPage?(en?COMPOUND_STRING("LEFT/RIGHT: legends  A: info  B: back"):COMPOUND_STRING("ESQ/DIR: lendarios  A: info  B: voltar")):(en?COMPOUND_STRING("A: info  L/R: Prisma  SEL: rules  B: back"):COMPOUND_STRING("A: info L/R: Prisma SEL: regras B: voltar")),8,149,11,38,1,0);
    HeUiPresent();
}
static void SiMissionMain(void)
{
    if(HeUiBusy())return;
    if(JOY_NEW(SELECT_BUTTON)){HeOpenJourneyRules();return;}
    if(JOY_NEW(L_BUTTON)||JOY_NEW(R_BUTTON)){sPage=sPage==2?0:2;Draw();return;}
    if(JOY_NEW(B_BUTTON))
    {
        HeUiClose();
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);return;
    }
    if(sPage==2){if(JOY_NEW(DPAD_LEFT)||JOY_NEW(DPAD_RIGHT)||JOY_NEW(A_BUTTON)){SiPrismCycle(JOY_NEW(DPAD_LEFT)?-1:1);Draw();}return;}
    if(JOY_NEW(A_BUTTON)){PlaySE(SE_SELECT);sPage=!sPage;sDetailScroll=0;Draw();}
    else if(sPage && JOY_NEW(DPAD_DOWN)){if(sDetailScroll<8)sDetailScroll++;Draw();}
    else if(sPage && JOY_NEW(DPAD_UP)){if(sDetailScroll)sDetailScroll--;Draw();}
    else if(!sPage && sStage>=29 && (JOY_NEW(DPAD_LEFT)||JOY_NEW(DPAD_RIGHT))){SelectLegend(JOY_NEW(DPAD_LEFT)?-1:1);Draw();}
}
void SiOpenMissionMenu(void)
{
    if(!SiIsSeason())return;
    sStage=VarGet(VAR_SI_STAGE);if(sStage>29)sStage=29;
    sPage=sDetailScroll=0;sLegend=9;
    if(sStage>=29)SelectLegend(1);
    HeUiInit(FALSE);
    Draw();SetMainCallback2(SiMissionMain);
}
