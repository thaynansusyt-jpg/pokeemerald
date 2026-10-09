#ifndef GUARD_SINNOH_CHAPTER_H
#define GUARD_SINNOH_CHAPTER_H
#include "config/sinnoh.h"
unsigned char SiAdminUnlocked(void);
void SiInRegion(void);
unsigned char SiIsSeason(void);
unsigned char SiNewGameSeason(void);
unsigned char SiNamingSeason(void);
const unsigned char *SiLayoutName(unsigned short layoutId);
void SiInitializeSeason(void);
void SiOpenMissionMenu(void);
void SiCoachFillCandy(void);
void SiCoachMaxIvs(void);
#endif
