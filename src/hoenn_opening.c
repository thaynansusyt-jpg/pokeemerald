#include "global.h"
#include "text.h"
#include "main.h"
#include "gpu_regs.h"
#include "sound.h"
#include "rtc.h"
#include "constants/rgb.h"
#include "constants/songs.h"
static const u8 sFont[] = INCBIN_U8("graphics/hoenn_expansion/small_font.bin");
static const u8 sRustboro[] = INCBIN_U8("graphics/hoenn_expansion/opening_rustboro.8bpp");
static const u16 sRustboroPal[] = INCBIN_U16("graphics/hoenn_expansion/opening_rustboro.gbapal");
static const u8 sSlateport[] = INCBIN_U8("graphics/hoenn_expansion/opening_slateport.8bpp");
static const u16 sSlateportPal[] = INCBIN_U16("graphics/hoenn_expansion/opening_slateport.gbapal");
static const u8 sLittleroot[] = INCBIN_U8("graphics/hoenn_expansion/opening_littleroot.8bpp");
static const u16 sLittlerootPal[] = INCBIN_U16("graphics/hoenn_expansion/opening_littleroot.gbapal");
static const u8 sRocket[] = INCGFX_U8("graphics/object_events/pics/people/rocket_m.png", ".4bpp", "-mwidth 2 -mheight 4");
static const u16 sRocketPal[] = INCGFX_U16("graphics/object_events/pics/people/rocket_m.png", ".gbapal");
static const u16 sUiColors[] = {RGB_BLACK, RGB(1, 2, 3), RGB(30, 23, 5), RGB_WHITE, RGB(15, 3, 4)};
static const u8 sCaptions[][4][40] = {
    {_("RUSTBORO - 02:17"), _("A REDE DEVON FOI INVADIDA."), _("HOSPITAIS PERDERAM ENERGIA."), _("OS PEDIDOS DE SOCORRO CESSARAM.")},
    {_("OPERAÇAO ECLIPSE"), _("VESPER: NAO ATAQUEM A LIGA."), _("CONTROLEM ÁGUA, LUZ E RÁDIO."), _("A FOME VAI LUTAR POR NÓS.")},
    {_("SLATEPORT - 06:40"), _("NAVIOS DE AJUDA FORAM TOMADOS."), _("A ROCKET OFERECE PROTEÇAO..."), _("EM TROCA DOS POKÉMON LOCAIS.")},
    {_("LITTLEROOT - DIA SEGUINTE"), _("BIRCH: A MIGRAÇAO NAO É NATURAL."), _("ALGO EXPULSA OS POKÉMON."), _("PRECISO DE PROVAS, NAO RUMORES.")},
    {_("POKÉMON HOENN EXPANSION"), _("SEU CAMINHAO CRUZA A FRONTEIRA."), _("UMA VIAGEM COMEÇA."), _("UMA REGIAO PRECISA RESPIRAR.")},
};
static MainCallback sReturnMain, sReturnVBlank;
static volatile u16 sFrame;
static u16 sLastDraw;
static u8 sScene, sDrawingPage;
static volatile u8 sDisplayedPage;
static volatile bool8 sPendingFrame;
static bool8 sThunderPlayed;

static volatile u16 *FrameBuffer(void)
{
    return (void *)(VRAM + (sDrawingPage ? 0xA000 : 0));
}

static void Pixel(int x, int y, u8 color)
{
    volatile u16 *p;
    if (x < 0 || y < 0 || x >= DISPLAY_WIDTH || y >= DISPLAY_HEIGHT) return;
    p = FrameBuffer() + (y * DISPLAY_WIDTH + x) / 2;
    if (x & 1) *p = (*p & 0x00FF) | (color << 8);
    else *p = (*p & 0xFF00) | color;
}

static void Rect(int x, int y, int w, int h, u8 color)
{
    int row, endX = x + w;
    if (endX > DISPLAY_WIDTH) endX = DISPLAY_WIDTH;
    if (x < 0) x = 0;
    for (row = y < 0 ? 0 : y; row < y + h && row < DISPLAY_HEIGHT; row++)
    {
        int left = x, right = endX;
        if (left & 1) Pixel(left++, row, color);
        if (right & 1) Pixel(--right, row, color);
        if (right > left)
            CpuFill16(color | (color << 8), (void *)(FrameBuffer() + (row * DISPLAY_WIDTH + left) / 2), right - left);
    }
}

static void Text(const u8 *str, int x, int y, u8 color)
{
    int i, j;
    while (*str != EOS)
    {
        const u8 *glyph = sFont + *str++ * 128;
        for (j = 0; j < 16; j++)
            for (i = 0; i < 8; i++)
                if (glyph[j * 8 + i] == 1) Pixel(x + i, y + j, color);
        x += 6;
    }
}

static void Agent(int x, int y)
{
    int px, py;
    int frame = sFrame / 20 % 2 ? 3 : 0;
    const u8 *tiles = sRocket + frame * 512;
    for (py = 0; py < 32; py++)
        for (px = 0; px < 16; px++)
        {
            int offset = ((py / 8) * 2 + px / 8) * 32 + (py % 8) * 4 + px % 8 / 2;
            u8 color = (tiles[offset] >> ((px & 1) * 4)) & 15;
            if (color) Pixel(x + px, y + py, 128 + color);
        }
}

static void DrawScene(void)
{
    int i;
    const u8 *bg = sScene < 2 ? sRustboro : sScene == 2 ? sSlateport : sLittleroot;
    sDrawingPage = !sDisplayedPage;
    CpuCopy16(bg, (void *)FrameBuffer(), DISPLAY_WIDTH * 85);
    if (sScene < 3) Agent(sScene == 2 ? 165 - sFrame / 12 : 142 + sFrame / 28, 47);
    Rect(0, 85, 240, 75, 145);
    Rect(0, 85, 240, 1, 148);
    Text(sCaptions[sScene][0], 7, 88, 146);
    for (i = 1; i < 4; i++) Text(sCaptions[sScene][i], 7, 90 + i * 15, 147);
    sPendingFrame = TRUE;
}

static void OpeningVBlank(void)
{
    int i;
    const u16 *pal = sScene < 2 ? sRustboroPal : sScene == 2 ? sSlateportPal : sLittlerootPal;
    sFrame++;
    if (!sPendingFrame) return;
    for (i = 0; i < 128; i++)
    {
        u16 c = pal[i];
        if (sScene < 2)
        {
            int factor = sScene == 0 && sFrame < 110 ? 3 : 1;
            c = RGB((c & 31) * factor / 5, ((c >> 5) & 31) * factor / 5, ((c >> 10) & 31) * factor / 5);
        }
        ((volatile u16 *)PLTT)[i] = c;
    }
    CpuCopy16(sRocketPal, (void *)(PLTT + 128 * 2), sizeof(sRocketPal));
    CpuCopy16(sUiColors, (void *)(PLTT + 144 * 2), sizeof(sUiColors));
    sDisplayedPage = sDrawingPage;
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_4 | DISPCNT_BG2_ON | (sDisplayedPage ? (1 << 4) : 0));
    sPendingFrame = FALSE;
}

static void OpeningMain(void)
{
    if (JOY_NEW(START_BUTTON) || sScene >= ARRAY_COUNT(sCaptions))
    {
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetVBlankCallback(sReturnVBlank);
        SetMainCallback2(sReturnMain);
        return;
    }
    if (sFrame >= 110 && sScene == 0 && !sThunderPlayed)
    {
        PlaySE(SE_THUNDER);
        sThunderPlayed = TRUE;
    }
    if (sFrame >= 360 || (sFrame > 45 && JOY_NEW(A_BUTTON)))
    {
        sFrame = 0; sLastDraw = 0;
        if (++sScene >= ARRAY_COUNT(sCaptions)) return;
    }
    if (!sPendingFrame && (sFrame >= sLastDraw + 6 || sFrame == 0))
    {
        sLastDraw = sFrame;
        DrawScene();
    }
}

void HeStartOpening(MainCallback returnMain, MainCallback returnVBlank)
{
    sReturnMain = returnMain; sReturnVBlank = returnVBlank;
    sFrame = sLastDraw = 0; sScene = sDisplayedPage = 0;
    sThunderPlayed = sPendingFrame = FALSE;
    SetVBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_WIN0H, 0); SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_BG2PA, 0x100); SetGpuReg(REG_OFFSET_BG2PB, 0);
    SetGpuReg(REG_OFFSET_BG2PC, 0); SetGpuReg(REG_OFFSET_BG2PD, 0x100);
    SetGpuReg(REG_OFFSET_BG2X_L, 0); SetGpuReg(REG_OFFSET_BG2X_H, 0);
    SetGpuReg(REG_OFFSET_BG2Y_L, 0); SetGpuReg(REG_OFFSET_BG2Y_H, 0);
    DrawScene();
    PlayBGM(MUS_RG_ROCKET_HIDEOUT);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_4 | DISPCNT_BG2_ON);
    SetVBlankCallback(OpeningVBlank);
    SetMainCallback2(OpeningMain);
}

void HeSyncRtc(void)
{
    // Keep the hardware/emulator clock untouched and use its current local time.
    memset(&gSaveBlock2Ptr->localTimeOffset, 0, sizeof(gSaveBlock2Ptr->localTimeOffset));
    RtcCalcLocalTime();
}
