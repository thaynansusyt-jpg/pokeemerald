#ifndef GUARD_JOURNEY_UI_H
#define GUARD_JOURNEY_UI_H
void HeUiInit(unsigned char preserveOpening);
void HeUiBegin(void);
void HeUiPresent(void);
unsigned char HeUiBusy(void);
void HeUiVBlank(void);
void HeUiClose(void);
void HeUiPixel(short x,short y,unsigned char color);
void HeUiRect(short x,short y,short w,short h,unsigned char color);
void HeUiLine(short x,short y,short tx,short ty,unsigned char color);
void HeUiText(const unsigned char *s,short x,short y,unsigned char color,unsigned char width,unsigned char lines,unsigned char skip);
void HeUiCard(short x,short y,short w,short h);
#endif
