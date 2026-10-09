#ifndef GUARD_UNOVA_CHAPTER_H
#define GUARD_UNOVA_CHAPTER_H
unsigned char UnIsSeason(void);
void UnInitializeSeason(void);
unsigned char UnCurrentSeason(void);
const unsigned char *UnSeasonName(void);
const unsigned char *UnLayoutName(unsigned short layoutId);
void UnSeasonPalette(unsigned short dest, unsigned short size);
void UnBattleTextPalette(void);
void UnPrepareGiftSave(void);
void UnResonancePulse(void);
void UnHeal(void);
void UnSetHeal(void);
void UnOpenMission(void);
void UnOpenHub(void);
void HeHomeOpen(unsigned char hasSave);
void HeHomeStartNewGame(void);
void HeGiftOpen(unsigned char fromHome);
unsigned char HeGiftRedeem(unsigned char gift);
void HeHubAction(unsigned char action);
unsigned UnApplyCapture(unsigned odds, unsigned char battler);
unsigned short UnWildSpecies(unsigned short species);
#endif
