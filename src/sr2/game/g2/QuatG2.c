#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_FromEulerf);

INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_ToEuler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_FromMatrixf);

INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_ToMatrixf);

INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_Slerp);

void G2EulerAngles_ToMatrixf(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2EulerAngles_FromMatrixf);
