#include "global.h"
#include "journey_ui.h"
#include "main.h"
#include "gpu_regs.h"
#include "task.h"
#include "sprite.h"
#include "palette.h"
#include "bg.h"
#include "window.h"
#include "text.h"
#include "menu.h"
#include "scanline_effect.h"
#include "dma3.h"
#include "constants/rgb.h"
#include "constants/characters.h"
static const u8 sFont[] = INCBIN_U8("graphics/hoenn_expansion/small_font.bin");
static const u16 sColors[] = {
    RGB(28,29,26), RGB(3,7,11), RGB(7,14,18), RGB(12,21,24),
    RGB(17,25,17), RGB(10,20,13), RGB(24,25,18), RGB(25,30,30),
    RGB(25,19,7), RGB(31,27,12), RGB(26,5,9), RGB(31,31,29),
    RGB(14,17,15), RGB(18,23,24), RGB(11,23,27), RGB(6,11,15)
};

static volatile bool8 sDrawPage, sDisplayPage, sPending;
static volatile u16 *Buffer(void) {return (void *)(VRAM + (sDrawPage ? 0xA000 : 0));}
void HeUiPixel(s16 x,s16 y,u8 color)
{
    volatile u16 *p;
    if (x<0 || y<0 || x>=240 || y>=160) return;
    p=Buffer()+(y*240+x)/2;
    if(x&1)*p=(*p&255)|(color<<8);else *p=(*p&0xFF00)|color;
}
void HeUiRect(s16 x,s16 y,s16 w,s16 h,u8 c)
{
    s16 row, endX=x+w;
    if (endX>240) endX=240;
    if (x<0) x=0;
    for(row=y<0?0:y;row<y+h && row<160;row++)
    {
        s16 left=x,right=endX;
        if(left&1) HeUiPixel(left++,row,c);
        if(right&1) HeUiPixel(--right,row,c);
        if(right>left) CpuFill16(c|(c<<8),(void *)(Buffer()+(row*240+left)/2),right-left);
    }
}
void HeUiLine(s16 x,s16 y,s16 tx,s16 ty,u8 color)
{
    s16 dx=abs(tx-x),sx=x<tx?1:-1,dy=-abs(ty-y),sy=y<ty?1:-1,err=dx+dy,e;
    for(;;){HeUiPixel(x,y,color);if(x==tx&&y==ty)break;e=2*err;if(e>=dy){err+=dy;x+=sx;}if(e<=dx){err+=dx;y+=sy;}}
}
void HeUiText(const u8 *s,s16 x,s16 y,u8 c,u8 width,u8 lines,u8 skip)
{
    u16 i,j,column=0,row=0; s16 base=x; bool8 newWord=TRUE;
    while(*s!=EOS)
    {
        const u8 *glyph;
        u8 ch=*s++;
        if(ch==CHAR_NEWLINE || ch==CHAR_PROMPT_SCROLL || ch==CHAR_PROMPT_CLEAR){row++;column=0;newWord=TRUE;continue;}
        if(ch==EXT_CTRL_CODE_BEGIN || ch==PLACEHOLDER_BEGIN)break;
        if(newWord && ch!=CHAR_SPACE)
        {
            u16 length=1;const u8 *next=s;
            while(*next!=EOS && *next!=CHAR_SPACE && *next<CHAR_PROMPT_SCROLL){length++;next++;}
            if(column && column+length>width){row++;column=0;}
        }
        newWord=ch==CHAR_SPACE;
        if(column==0 && ch==CHAR_SPACE)continue;
        if(column>=width){row++;column=0;}
        if(row>=skip+lines)break;
        if(row>=skip){glyph=sFont+ch*128;for(j=0;j<16;j++)for(i=0;i<6;i++)if(glyph[j*8+i]==1)HeUiPixel(base+column*6+i,y+(row-skip)*14+j,c);}
        column++;
    }
}
void HeUiCard(s16 x,s16 y,s16 w,s16 h)
{
    HeUiRect(x+2,y+2,w,h,13);HeUiRect(x,y,w,h,11);HeUiRect(x,y,w,1,8);HeUiRect(x,y,1,h,8);
    HeUiRect(x+w-1,y,1,h,8);HeUiRect(x,y+h-1,w,1,8);
}

void HeUiBegin(void) {sDrawPage=!sDisplayPage;CpuFill16(0,(void *)Buffer(),240*160);}
void HeUiPresent(void) {sPending=TRUE;}
unsigned char HeUiBusy(void) {return sPending;}
void HeUiVBlank(void)
{
    if(!sPending)return;
    CpuCopy16(sColors,(void *)PLTT,sizeof(sColors));
    sDisplayPage=sDrawPage;
    SetGpuReg(REG_OFFSET_DISPCNT,DISPCNT_MODE_4|DISPCNT_BG2_ON|(sDisplayPage?(1<<4):0));
    sPending=FALSE;
}
void HeUiClose(void) {SetVBlankCallback(NULL);SetGpuReg(REG_OFFSET_DISPCNT,0);}
void HeUiInit(unsigned char preserveOpening)
{
    SetVBlankCallback(NULL);SetHBlankCallback(NULL);ScanlineEffect_Stop();ClearDma3Requests();
    SetGpuReg(REG_OFFSET_DISPCNT,0);
    if(!preserveOpening)
    {
        ResetTasks();ResetPaletteFade();DeactivateAllTextPrinters();FreeAllWindowBuffers();
        ResetSpriteData();FreeSpriteTileRanges();FreeAllSpritePalettes();
        ResetBgsAndClearDma3BusyFlags(0);ClearScheduledBgCopiesToVram();
    }
    SetGpuReg(REG_OFFSET_BLDCNT,0);SetGpuReg(REG_OFFSET_WIN0H,0);SetGpuReg(REG_OFFSET_WIN0V,0);
    SetGpuReg(REG_OFFSET_BG2PA,0x100);SetGpuReg(REG_OFFSET_BG2PB,0);
    SetGpuReg(REG_OFFSET_BG2PC,0);SetGpuReg(REG_OFFSET_BG2PD,0x100);
    SetGpuReg(REG_OFFSET_BG2X_L,0);SetGpuReg(REG_OFFSET_BG2X_H,0);
    SetGpuReg(REG_OFFSET_BG2Y_L,0);SetGpuReg(REG_OFFSET_BG2Y_H,0);
    sDrawPage=sDisplayPage=sPending=FALSE;
    SetVBlankCallback(HeUiVBlank);
}
