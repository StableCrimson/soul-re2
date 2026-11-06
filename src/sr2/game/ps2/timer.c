#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_Tick);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_GetCycles);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_CyclesToUS);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_TimeDiff);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_GetTimeMS);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_GetTimeUS);

void PC_Tick(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", PC_GetDCacheMisses);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", PC_GetICacheMisses);
