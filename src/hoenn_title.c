#include "global.h"
#include "text.h"
#include "hoenn_expansion.h"
#include "main.h"
#include "main_menu.h"
#include "clear_save_data_menu.h"
#include "gpu_regs.h"
#include "palette.h"
#include "sprite.h"
#include "task.h"
#include "sound.h"
#include "constants/rgb.h"
#include "constants/songs.h"

static const u16 sBackground[] = INCBIN_U16("graphics/hoenn_expansion/title_background.bin");
static const u16 sLogo[] = INCBIN_U16("graphics/hoenn_expansion/title_logo.bin");
static const u8 sFont[] = INCBIN_U8("graphics/hoenn_expansion/small_font.bin");
static const u8 sHoenn[] = _("HOENN");
static const u8 sExpansion[] = _("EXPANSION");
static const u8 sStart[] = _("PRESS START");
static const u8 sStartBr[] = _("APERTE START");
static u8 sFade;

static void DrawTitleText(const u8 *text, int x, int y, int scale, u16 color)
{
    volatile u16 *screen = (void *)VRAM;
    while (*text != EOS)
    {
        int px, py, dx, dy;
        const u8 *glyph = &sFont[*text++ * 128];
        for (py = 0; py < 16; py++)
            for (px = 0; px < 8; px++)
                if (glyph[py * 8 + px] == 1)
                    for (dy = 0; dy < scale; dy++)
                        for (dx = 0; dx < scale; dx++)
                            if (x + px * scale + dx < DISPLAY_WIDTH && y + py * scale + dy < DISPLAY_HEIGHT)
                                screen[(y + py * scale + dy) * DISPLAY_WIDTH + x + px * scale + dx] = color;
        x += 6 * scale;
    }
}

static void TitleMain(void)
{
    if (sFade)
    {
        SetGpuReg(REG_OFFSET_BLDY, sFade);
        if (++sFade > 16)
        {
            SetGpuReg(REG_OFFSET_DISPCNT, 0);
            SetMainCallback2(CB2_InitMainMenu);
        }
    }
    else if (JOY_HELD(B_BUTTON | SELECT_BUTTON | DPAD_UP) == (B_BUTTON | SELECT_BUTTON | DPAD_UP))
    {
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetMainCallback2(CB2_InitClearSaveDataScreen);
    }
    else if (JOY_NEW(A_BUTTON | START_BUTTON))
    {
        FadeOutBGM(4);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG2 | BLDCNT_EFFECT_DARKEN);
        sFade = 1;
    }
}

void HeInitTitleScreen(void)
{
    int x, y;
    volatile u16 *screen = (void *)VRAM;
    SetVBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    ResetTasks();
    ResetSpriteData();
    FreeAllSpritePalettes();
    CpuCopy16(sBackground, (void *)VRAM, sizeof(sBackground));
    for (y = 0; y < 42; y++)
        for (x = 0; x < 112; x++)
            if (!(sLogo[y * 112 + x] & 0x8000))
                screen[(y + 30) * DISPLAY_WIDTH + x + 4] = sLogo[y * 112 + x];
    DrawTitleText(sHoenn, 28, 82, 2, RGB_BLACK);
    DrawTitleText(sHoenn, 27, 81, 2, RGB_WHITE);
    DrawTitleText(sExpansion, 28, 111, 1, RGB_BLACK);
    DrawTitleText(sExpansion, 27, 110, 1, RGB_WHITE);
    DrawTitleText(gSaveBlock2Ptr->optionsLanguage ? sStartBr : sStart, 10, 141, 1, RGB_WHITE);
    sFade = 0;
    SetGpuReg(REG_OFFSET_BG2PA, 0x100);
    SetGpuReg(REG_OFFSET_BG2PB, 0);
    SetGpuReg(REG_OFFSET_BG2PC, 0);
    SetGpuReg(REG_OFFSET_BG2PD, 0x100);
    SetGpuReg(REG_OFFSET_BG2X_L, 0);
    SetGpuReg(REG_OFFSET_BG2X_H, 0);
    SetGpuReg(REG_OFFSET_BG2Y_L, 0);
    SetGpuReg(REG_OFFSET_BG2Y_H, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_3 | DISPCNT_BG2_ON);
    PlayBGM(MUS_TITLE);
    SetMainCallback2(TitleMain);
}
