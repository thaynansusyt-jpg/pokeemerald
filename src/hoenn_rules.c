#include "global.h"
#include "main.h"
#include "hoenn_rules.h"
#include "bg.h"
#include "window.h"
#include "text.h"
#include "menu.h"
#include "palette.h"
#include "gpu_regs.h"
#include "event_data.h"
#include "sound.h"
#include "item.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/rgb.h"

extern void HeStartOpening(MainCallback, MainCallback);
static MainCallback sReturnMain, sReturnVBlank;
static u8 sWindow, sRow;
// These survive the Birch speech; only NewGameInitData commits them to the save.
static EWRAM_DATA u8 sChoices[6] = {0};
static const u8 sCounts[6] = {3, 3, 2, 2, 2, 2};
static const u8 sTitle[] = _("REGRAS DA JORNADA");
static const u8 sStart[] = _("Comecar aventura");
static const u8 sHelp[] = _("Cima/baixo: linha  Esq/dir: opcao");
static const u8 *const sLabels[6] = {
    COMPOUND_STRING("Dificuldade"), COMPOUND_STRING("Limite de nivel"), COMPOUND_STRING("Anti-grinding"),
    COMPOUND_STRING("EXP para equipe"), COMPOUND_STRING("Uso da mochila"), COMPOUND_STRING("Estilo de batalha")
};
static const u8 *const sValues[6][3] = {
    {COMPOUND_STRING("Facil"), COMPOUND_STRING("Normal"), COMPOUND_STRING("Dificil")},
    {COMPOUND_STRING("Livre"), COMPOUND_STRING("Rigido"), COMPOUND_STRING("Suave")},
    {COMPOUND_STRING("Desligado"), COMPOUND_STRING("Ligado"), NULL},
    {COMPOUND_STRING("Desligado"), COMPOUND_STRING("Ligado"), NULL},
    {COMPOUND_STRING("Livre"), COMPOUND_STRING("So selvagens"), NULL},
    {COMPOUND_STRING("Trocar"), COMPOUND_STRING("Manter"), NULL}
};
static const u8 *const sHints[6] = {
    COMPOUND_STRING("Muda niveis e IVs dos treinadores."),
    COMPOUND_STRING("Rigido bloqueia EXP e doces no limite."),
    COMPOUND_STRING("EXP extra com limite. Coach da doces."),
    COMPOUND_STRING("Todos os membros recebem experiencia."),
    COMPOUND_STRING("Bloqueia itens da mochila em combate."),
    COMPOUND_STRING("Manter impede troca gratuita apos KO.")
};
static void DrawRules(void)
{
    static const u8 normal[] = {0, 1, 2};
    static const u8 selected[] = {0, 3, 2};
    u32 i;
    FillWindowPixelBuffer(sWindow, PIXEL_FILL(0));
    AddTextPrinterParameterized3(sWindow, FONT_NORMAL, 3, 2, normal, TEXT_SKIP_DRAW, sTitle);
    for (i = 0; i < 6; i++)
    {
        const u8 *colors = sRow == i ? selected : normal;
        AddTextPrinterParameterized3(sWindow, FONT_SMALL, 4, 25 + i * 14, colors, TEXT_SKIP_DRAW, sLabels[i]);
        AddTextPrinterParameterized3(sWindow, FONT_SMALL, 139, 25 + i * 14, colors, TEXT_SKIP_DRAW, sValues[i][sChoices[i]]);
    }
    AddTextPrinterParameterized3(sWindow, FONT_NORMAL, 4, 110, sRow == 6 ? selected : normal, TEXT_SKIP_DRAW, sStart);
    AddTextPrinterParameterized3(sWindow, FONT_SMALL, 4, 130, normal, TEXT_SKIP_DRAW, sRow < 6 ? sHints[sRow] : sHelp);
    PutWindowTilemap(sWindow);
    CopyWindowToVram(sWindow, COPYWIN_FULL);
}
static void RulesMain(void)
{
    if (JOY_NEW(DPAD_UP)) { sRow = sRow == 0 ? 6 : sRow - 1; DrawRules(); }
    else if (JOY_NEW(DPAD_DOWN)) { sRow = (sRow + 1) % 7; DrawRules(); }
    else if (sRow < 6 && (JOY_NEW(DPAD_LEFT) || JOY_NEW(DPAD_RIGHT) || JOY_NEW(A_BUTTON)))
    {
        sChoices[sRow] = (sChoices[sRow] + (JOY_NEW(DPAD_LEFT) ? sCounts[sRow] - 1 : 1)) % sCounts[sRow];
        PlaySE(SE_SELECT);
        DrawRules();
    }
    else if (sRow == 6 && JOY_NEW(A_BUTTON))
    {
        ClearWindowTilemap(sWindow);
        RemoveWindow(sWindow);
        HeStartOpening(sReturnMain, sReturnVBlank);
    }
    UpdatePaletteFade();
}
void HeStartNewGameConfig(MainCallback main, MainCallback vblank)
{
    static const struct WindowTemplate window = {0, 1, 0, 28, 19, 15, 0x100};
    static const u16 palette[16] = {RGB(2, 4, 8), RGB(29, 30, 31), RGB(7, 9, 13), RGB(31, 23, 5)};
    u32 i;
    sReturnMain = main; sReturnVBlank = vblank; sRow = 0;
    sChoices[0] = 1; sChoices[1] = 0; sChoices[2] = 1; sChoices[3] = 0; sChoices[4] = 0; sChoices[5] = 0;
    for (i = 0; i < 8; i++) ClearWindowTilemap(i);
    FillBgTilemapBufferRect(0, 0, 0, 0, 32, 32, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_BG0_ON);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_WIN0H, 0); SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0); SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    LoadPalette(palette, BG_PLTT_ID(15), sizeof(palette));
    sWindow = AddWindow(&window);
    DrawRules();
    SetMainCallback2(RulesMain);
}
void HeApplyNewGameRules(void)
{
    VarSet(VAR_HE_DIFFICULTY, sChoices[0]);
    VarSet(VAR_HE_LEVEL_CAP, sChoices[1]);
    VarSet(VAR_HE_BAG_RULES, sChoices[4]);
    if (sChoices[2]) FlagSet(FLAG_HE_ANTI_GRINDING);
    if (sChoices[3]) FlagSet(FLAG_HE_EXP_ALL);
    gSaveBlock2Ptr->optionsBattleStyle = sChoices[5];
}
// Repair the 0.7 theft gate without changing the save layout or resetting progress.
// Safe to run repeatedly: later Devon states, sailing and completed arcs are untouched.
void HeRepairProgression(void)
{
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
