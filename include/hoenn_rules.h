#ifndef GUARD_HOENN_RULES_H
#define GUARD_HOENN_RULES_H
unsigned HeExpCapType(void);
unsigned char HeFastTraining(void);
void HeApplyNewGameRules(void);
void HeRepairProgression(void);
void HeOpenJourneyRules(void);
void HeStartNewGameConfig(void (*main)(void), void (*vblank)(void));
#endif
