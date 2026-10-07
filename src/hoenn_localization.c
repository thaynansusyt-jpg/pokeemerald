#include "global.h"
#include "hoenn_expansion.h"
#include "string_util.h"
static const u8 sLanguageEn[] = _("LANGUAGE");
static const u8 sLanguageBr[] = _("IDIOMA");
struct HeTranslation { const u8 *en; const u8 *br; };
static const u8 sEn0[] = _("NEW GAME");
static const u8 sBr0[] = _("NOVO JOGO");
static const u8 sEn1[] = _("CONTINUE");
static const u8 sBr1[] = _("CONTINUAR");
static const u8 sEn2[] = _("OPTION");
static const u8 sBr2[] = _("AJUSTES");
static const u8 sEn3[] = _("TEXT SPEED");
static const u8 sBr3[] = _("VEL. TEXTO");
static const u8 sEn4[] = _("BATTLE SCENE");
static const u8 sBr4[] = _("ANIM. BATALHA");
static const u8 sEn5[] = _("BATTLE STYLE");
static const u8 sBr5[] = _("ESTILO");
static const u8 sEn6[] = _("SOUND");
static const u8 sBr6[] = _("SOM");
static const u8 sEn7[] = _("FRAME");
static const u8 sBr7[] = _("MOLDURA");
static const u8 sEn8[] = _("CANCEL");
static const u8 sBr8[] = _("VOLTAR");
static const u8 sEn9[] = _("BUTTON MODE");
static const u8 sBr9[] = _("BOTOES");
static const u8 sEn10[] = _("BAG");
static const u8 sBr10[] = _("MOCHILA");
static const u8 sEn11[] = _("SAVE");
static const u8 sBr11[] = _("SALVAR");
static const u8 sEn12[] = _("EXIT");
static const u8 sBr12[] = _("SAIR");
static const u8 sEn13[] = _("YES");
static const u8 sBr13[] = _("SIM");
static const u8 sEn14[] = _("NO");
static const u8 sBr14[] = _("Não");
static const u8 sEn15[] = _("PLAYER");
static const u8 sBr15[] = _("JOGADOR");
static const u8 sEn16[] = _("TIME");
static const u8 sBr16[] = _("TEMPO");
static const u8 sEn17[] = _("BADGES");
static const u8 sBr17[] = _("INSIGNIAS");
static const u8 sEn18[] = _("BOY");
static const u8 sBr18[] = _("GAROTO");
static const u8 sEn19[] = _("GIRL");
static const u8 sBr19[] = _("GAROTA");
static const u8 sEn20[] = _("FIGHT");
static const u8 sBr20[] = _("LUTAR");
static const u8 sEn21[] = _("RUN");
static const u8 sBr21[] = _("FUGIR");
static const u8 sEn22[] = _("ITEMS");
static const u8 sBr22[] = _("ITENS");
static const u8 sEn23[] = _("KEY ITEMS");
static const u8 sBr23[] = _("ITENS CHAVE");
static const u8 sEn24[] = _("BERRIES");
static const u8 sBr24[] = _("FRUTAS");
static const u8 sEn25[] = _("POKé BALLS");
static const u8 sBr25[] = _("POKé BOLAS");
static const u8 sEn26[] = _("SUMMARY");
static const u8 sBr26[] = _("RESUMO");
static const u8 sEn27[] = _("SWITCH");
static const u8 sBr27[] = _("TROCAR");
static const u8 sEn28[] = _("ITEM");
static const u8 sBr28[] = _("ITEM");
static const u8 sEn29[] = _("GIVE");
static const u8 sBr29[] = _("DAR");
static const u8 sEn30[] = _("TAKE");
static const u8 sBr30[] = _("PEGAR");
static const u8 sEn31[] = _("CHECK");
static const u8 sBr31[] = _("VER");
static const u8 sEn32[] = _("MOVE");
static const u8 sBr32[] = _("MOVER");
static const u8 sEn33[] = _("USE");
static const u8 sBr33[] = _("USAR");
static const u8 sEn34[] = _("TOSS");
static const u8 sBr34[] = _("JOGAR FORA");
static const u8 sEn35[] = _("QUIT");
static const u8 sBr35[] = _("SAIR");
static const u8 sEn36[] = _("CHOOSE");
static const u8 sBr36[] = _("ESCOLHER");
static const u8 sEn37[] = _("DEPOSIT");
static const u8 sBr37[] = _("DEPOSITAR");
static const u8 sEn38[] = _("WITHDRAW");
static const u8 sBr38[] = _("RETIRAR");
static const u8 sEn39[] = _("RELEASE");
static const u8 sBr39[] = _("LIBERAR");
static const u8 sEn40[] = _("JUMP");
static const u8 sBr40[] = _("PULAR");
static const u8 sEn41[] = _("REST");
static const u8 sBr41[] = _("DESCANSAR");
static const u8 sEn42[] = _("RETIRE");
static const u8 sBr42[] = _("DESISTIR");
static const u8 sEn43[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SLOW");
static const u8 sBr43[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}LENTO");
static const u8 sEn44[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}MID");
static const u8 sBr44[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}MÉDIO");
static const u8 sEn45[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}FAST");
static const u8 sBr45[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}RÁPIDO");
static const u8 sEn46[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}ON");
static const u8 sBr46[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SIM");
static const u8 sEn47[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF");
static const u8 sBr47[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}Não");
static const u8 sEn48[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SHIFT");
static const u8 sBr48[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}TROCA");
static const u8 sEn49[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SET");
static const u8 sBr49[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}FIXO");
static const u8 sEn50[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}TYPE");
static const u8 sBr50[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}TIPO");
static const u8 sEn51[] = _("What would you like to do?");
static const u8 sBr51[] = _("O que você quer fazer?");
static const u8 sEn52[] = _("Would you like to save the game?");
static const u8 sBr52[] = _("Quer salvar o jogo?");
static const u8 sEn53[] = _("Saving…\nDon’t turn off the power.");
static const u8 sBr53[] = _("Salvando…\nMantenha o jogo ligado.");
static const u8 sEn54[] = _("Welcome to POKéMON\nHOENN EXPANSION!\pA new adventure across HOENN awaits!\pMy name is BIRCH.\pBut everyone calls me the POKéMON\nPROFESSOR.\p");
static const u8 sBr54[] = _("Bem-vindo a POKéMON\nHOENN EXPANSION!\pUma nova aventura em HOENN!\pMeu nome é BIRCH.\pTodos me chamam de\nPROFESSOR POKéMON.\p");
static const u8 sEn55[] = _("This is what we call a “POKéMON.”{PAUSE 96}\p");
static const u8 sBr55[] = _("Este é um POKéMON.{PAUSE 96}\p");
static const u8 sEn56[] = _("This world is widely inhabited by\ncreatures known as POKéMON.\pWe humans live alongside POKéMON,\nat times as friendly playmates, and\lat times as cooperative workmates.\pAnd sometimes, we band together\nand battle others like us.\pBut despite our closeness, we don't\nknow everything about POKéMON.\pIn fact, there are many, many\nsecrets surrounding POKéMON.\pTo unravel POKéMON mysteries,\nI've been undertaking research.\lThat's what I do.\p");
static const u8 sBr56[] = _("Nosso mundo é habitado por\ncriaturas chamadas POKéMON.\pVivemos ao lado dos POKéMON\ncomo amigos e parceiros.\pJuntos, também batalhamos\ncontra outros treinadores.\pAinda há muitos mistérios\nsobre os POKéMON.\pPara descobrir seus segredos,\neu trabalho como pesquisador.\p");
static const u8 sEn57[] = _("And you are?");
static const u8 sBr57[] = _("E você é?");
static const u8 sEn58[] = _("Are you a boy?\nOr are you a girl?");
static const u8 sBr58[] = _("Você é um garoto\nou uma garota?");
static const u8 sEn59[] = _("All right.\nWhat's your name?");
static const u8 sBr59[] = _("Certo!\nQual é o seu nome?");
static const u8 sEn60[] = _("So it's {PLAYER}{KUN}?");
static const u8 sBr60[] = _("Seu nome é {PLAYER}{KUN}?");
static const u8 sEn61[] = _("Ah, okay!\pYou're {PLAYER}{KUN} who's moving to my\nhometown of LITTLEROOT.\lI get it now!\p");
static const u8 sBr61[] = _("Ah, entendi!\pVocê é {PLAYER}{KUN}, que vai morar\nem LITTLEROOT, minha cidade!\p");
static const u8 sEn62[] = _("All right, are you ready?\pYour very own adventure is about\nto unfold.\pTake courage, and leap into the\nworld of POKéMON where dreams,\ladventure, and friendships await!\pWell, I'll be expecting you later.\nCome see me in my POKéMON LAB.\p");
static const u8 sBr62[] = _("Tudo pronto?\pSua própria aventura\nvai começar!\pTenha coragem! Entre no mundo\ndos POKéMON e faça amigos!\pDepois, venha me visitar\nno LABORATÓRIO POKéMON.\p");
static const u8 sEn63[] = _("Hi, are you new around here?\pI'm SENHOR LARANJA! I can't wait\nfor our battle.\pCome back after getting a POKéDEX.\nI'll help you on your journey.\pHere, take these!");
static const u8 sBr63[] = _("Olá, você é novo por aqui?\pSou o SENHOR LARANJA!\nTô ansioso pra nossa batalha.\pVenha aqui depois de pegar\na Pokédex. Vou te ajudar\lna jornada, toma!");
static const u8 sEn64[] = _("Six RARE CANDIES for your journey!\nTalk to me when you want to battle.");
static const u8 sBr64[] = _("Seis RARE CANDIES pra sua jornada!\nFale comigo quando quiser batalhar.");
static const u8 sEn65[] = _("Make room in your BAG for the gift.\nI'll keep it safe for you!");
static const u8 sBr65[] = _("Abra espaço na MOCHILA.\nVou guardar seu presente!");
static const u8 sEn66[] = _("You got your POKéDEX! Ready for\na friendly battle with my PIKACHU?");
static const u8 sBr66[] = _("Você pegou a Pokédex! Quer\nbatalhar contra meu PIKACHU?");
static const u8 sEn67[] = _("SENHOR LARANJA: Let's go, PIKACHU!");
static const u8 sBr67[] = _("SENHOR LARANJA: Vai, PIKACHU!");
static const u8 sEn68[] = _("That was a great first battle!");
static const u8 sBr68[] = _("Que ótima primeira batalha!");
static const u8 sEn69[] = _("I'll be here! Come back with\nyour POKéDEX when you're ready.");
static const u8 sBr69[] = _("Estarei aqui! Volte com sua\nPokédex quando estiver pronto.");
static const u8 sEn70[] = _("Keep going! I'm cheering for you\nand your POKéMON!");
static const u8 sBr70[] = _("Siga em frente! Tô torcendo\npor você e seus POKéMON!");
static const u8 sEn71[] = _("Join the HOENN research project!\pCatch 10 different HOENN species,\nthen return for an EXP. SHARE.\pYour POKéDEX records {STR_VAR_1} caught.\nEvolved POKéMON count, too!");
static const u8 sBr71[] = _("Participe da pesquisa de HOENN!\pCapture 10 espécies de HOENN\ne volte para ganhar um EXP. SHARE.\pSua Pokédex registra {STR_VAR_1} capturas.\nEvoluir também conta!");
static const u8 sEn72[] = _("Excellent fieldwork! Your POKéDEX\nrecords at least 10 HOENN species.\pHere is your research reward!");
static const u8 sBr72[] = _("Excelente! Você registrou pelo\nmenos 10 espécies de HOENN.\pAqui está seu prêmio!");
static const u8 sEn73[] = _("Your BAG is full. Make room and\ncome back to claim your reward!");
static const u8 sBr73[] = _("Sua MOCHILA está cheia.\nAbra espaço e volte pelo prêmio!");
static const u8 sEn74[] = _("Let a POKéMON hold the EXP. SHARE\nto help it grow with your team.\pKeep exploring! HOENN has new\nencounters waiting along its trails.");
static const u8 sBr74[] = _("Equipe um POKéMON com EXP. SHARE\npara ajudar seu time a crescer.\pContinue explorando! Há novos\nPOKéMON pelos caminhos de HOENN.");
static const u8 sEn75[] = _("{B_ATK_NAME_WITH_PREFIX}'s\nattack missed!");
static const u8 sBr75[] = _("O ataque de {B_ATK_NAME_WITH_PREFIX}\nerrou!");
static const u8 sEn76[] = _("{B_ATK_NAME_WITH_PREFIX}\nfainted!\p");
static const u8 sBr76[] = _("{B_ATK_NAME_WITH_PREFIX}\ndesmaiou!\p");
static const u8 sEn77[] = _("{B_DEF_NAME_WITH_PREFIX}\nfainted!\p");
static const u8 sBr77[] = _("{B_DEF_NAME_WITH_PREFIX}\ndesmaiou!\p");
static const u8 sEn78[] = _("{B_PLAYER_NAME} got ¥{B_BUFF1}\nfor winning!\p");
static const u8 sBr78[] = _("{B_PLAYER_NAME} recebeu ¥{B_BUFF1}\npela vitória!\p");
static const u8 sEn79[] = _("It's not very effective…");
static const u8 sBr79[] = _("Não foi muito eficaz...");
static const u8 sEn80[] = _("It's super effective!");
static const u8 sBr80[] = _("Foi supereficaz!");
static const u8 sEn81[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\nwould like to battle!\p");
static const u8 sBr81[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\nquer batalhar!\p");
static const u8 sEn82[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME} sent\nout {B_OPPONENT_MON1_NAME}!");
static const u8 sBr82[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\nenviou {B_OPPONENT_MON1_NAME}!");
static const u8 sEn83[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME} sent\nout {B_BUFF1}!");
static const u8 sBr83[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\nenviou {B_BUFF1}!");
static const u8 sEn84[] = _("Go! {B_PLAYER_MON1_NAME}!");
static const u8 sBr84[] = _("Vai, {B_PLAYER_MON1_NAME}!");
static const u8 sEn85[] = _("{B_ATK_NAME_WITH_PREFIX} used\n{B_BUFF2}");
static const u8 sBr85[] = _("{B_ATK_NAME_WITH_PREFIX} usou\n{B_BUFF2}");
static const u8 sEn86[] = _("Wild {B_OPPONENT_MON1_NAME} appeared!\p");
static const u8 sBr86[] = _("Um {B_OPPONENT_MON1_NAME}\nselvagem apareceu!\p");
static const u8 sEn87[] = _("Player defeated\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!\p");
static const u8 sBr87[] = _("Você venceu\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!\p");
static const u8 sEn88[] = _("{B_PLAYER_NAME} used\n{B_LAST_ITEM}!");
static const u8 sBr88[] = _("{B_PLAYER_NAME} usou\n{B_LAST_ITEM}!");
static const u8 sEn89[] = _("WALLY used\n{B_LAST_ITEM}!");
static const u8 sBr89[] = _("WALLY usou\n{B_LAST_ITEM}!");
static const u8 sEn90[] = _("But it had no effect!");
static const u8 sBr90[] = _("Mas não teve efeito!");
static const u8 sEn91[] = _("What will\n{B_ACTIVE_NAME_WITH_PREFIX} do?");
static const u8 sBr91[] = _("O que {B_ACTIVE_NAME_WITH_PREFIX}\nvai fazer?");
static const u8 sEn92[] = _("What will\n{B_PLAYER_NAME} do?");
static const u8 sBr92[] = _("O que {B_PLAYER_NAME}\nvai fazer?");
static const u8 sEn93[] = _("What will\nWALLY do?");
static const u8 sBr93[] = _("O que WALLY\nvai fazer?");
static const u8 sEn94[] = _("FIGHT{CLEAR_TO 56}BAG\nPOKéMON{CLEAR_TO 56}RUN");
static const u8 sBr94[] = _("LUTAR{CLEAR_TO 56}BOLSA\nPOKéMON{CLEAR_TO 56}FUGIR");
static const struct HeTranslation sTranslations[] = {
    {sLanguageEn, sLanguageBr},
    {sEn91, sBr91},
    {sEn92, sBr92},
    {sEn93, sBr93},
    {sEn94, sBr94},

    {sEn75, sBr75},
    {sEn76, sBr76},
    {sEn77, sBr77},
    {sEn78, sBr78},
    {sEn79, sBr79},
    {sEn80, sBr80},
    {sEn81, sBr81},
    {sEn82, sBr82},
    {sEn83, sBr83},
    {sEn84, sBr84},
    {sEn85, sBr85},
    {sEn86, sBr86},
    {sEn87, sBr87},
    {sEn88, sBr88},
    {sEn89, sBr89},
    {sEn90, sBr90},

    {sEn0, sBr0},
    {sEn1, sBr1},
    {sEn2, sBr2},
    {sEn3, sBr3},
    {sEn4, sBr4},
    {sEn5, sBr5},
    {sEn6, sBr6},
    {sEn7, sBr7},
    {sEn8, sBr8},
    {sEn9, sBr9},
    {sEn10, sBr10},
    {sEn11, sBr11},
    {sEn12, sBr12},
    {sEn13, sBr13},
    {sEn14, sBr14},
    {sEn15, sBr15},
    {sEn16, sBr16},
    {sEn17, sBr17},
    {sEn18, sBr18},
    {sEn19, sBr19},
    {sEn20, sBr20},
    {sEn21, sBr21},
    {sEn22, sBr22},
    {sEn23, sBr23},
    {sEn24, sBr24},
    {sEn25, sBr25},
    {sEn26, sBr26},
    {sEn27, sBr27},
    {sEn28, sBr28},
    {sEn29, sBr29},
    {sEn30, sBr30},
    {sEn31, sBr31},
    {sEn32, sBr32},
    {sEn33, sBr33},
    {sEn34, sBr34},
    {sEn35, sBr35},
    {sEn36, sBr36},
    {sEn37, sBr37},
    {sEn38, sBr38},
    {sEn39, sBr39},
    {sEn40, sBr40},
    {sEn41, sBr41},
    {sEn42, sBr42},
    {sEn43, sBr43},
    {sEn44, sBr44},
    {sEn45, sBr45},
    {sEn46, sBr46},
    {sEn47, sBr47},
    {sEn48, sBr48},
    {sEn49, sBr49},
    {sEn50, sBr50},
    {sEn51, sBr51},
    {sEn52, sBr52},
    {sEn53, sBr53},
    {sEn54, sBr54},
    {sEn55, sBr55},
    {sEn56, sBr56},
    {sEn57, sBr57},
    {sEn58, sBr58},
    {sEn59, sBr59},
    {sEn60, sBr60},
    {sEn61, sBr61},
    {sEn62, sBr62},
    {sEn63, sBr63},
    {sEn64, sBr64},
    {sEn65, sBr65},
    {sEn66, sBr66},
    {sEn67, sBr67},
    {sEn68, sBr68},
    {sEn69, sBr69},
    {sEn70, sBr70},
    {sEn71, sBr71},
    {sEn72, sBr72},
    {sEn73, sBr73},
    {sEn74, sBr74},
};
const u8 *HeLocalize(const u8 *text)
{
    u32 i;
    if (text == NULL || gSaveBlock2Ptr == NULL || !gSaveBlock2Ptr->optionsLanguage)
        return text;
    for (i = 0; i < ARRAY_COUNT(sTranslations); i++)
        if (text[0] == sTranslations[i].en[0] && StringCompare(text, sTranslations[i].en) == 0)
            return sTranslations[i].br;
    return text;
}
