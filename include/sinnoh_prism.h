#ifndef GUARD_SINNOH_PRISM_H
#define GUARD_SINNOH_PRISM_H
void SiPrismRepair(void);
void SiPrismRecharge(void);
void SiPrismTrainerWin(unsigned short trainerId);
void SiPrismCycle(signed char direction);
void SiPrismDraw(unsigned char english);
unsigned long SiPrismApplyCapture(unsigned long odds,unsigned long wildBattler);
void BS_SiPrismPrepareThrow(void);
#endif
