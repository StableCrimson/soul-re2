#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_calculateMatrix);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_transformAndClip);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_doBFC);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_iterateEdgeList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_closeVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_renderInstanceShadow);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_getPrimList);
