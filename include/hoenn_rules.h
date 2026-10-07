#ifndef GUARD_HOENN_RULES_H
#define GUARD_HOENN_RULES_H
#ifdef GUARD_GLOBAL_H
unsigned HeExpCapType(void);
unsigned char HeFastTraining(void);
void HeApplyNewGameRules(void);
void HeStartNewGameConfig(void (*main)(void), void (*vblank)(void));
#endif
#endif
