#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_CalculateWCTransform);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", AnimateScrollInfo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", AnimateAnimateInfo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_AnimateTextures);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_AnimateTerrainGroup);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_DoGlow);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PS2PIPE3D_InstanceCalcOutcode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PS2PIPE3D_InstanceListTransformAndDrawFunc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_InstanceListTransformAndDraw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_LabelInstanceListInvisible);

void PIPE3D_TransformVerticesToWorld(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_TransformFromZAxis);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_CalcWorldToSplitPlaneTransform);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_TransformSplitInstanceVertices);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_HalvePlaneGetRingPoints);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_SetupHalvePlane);
