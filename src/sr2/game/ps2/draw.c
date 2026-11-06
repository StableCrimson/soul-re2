#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_DrawLines);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_FlatQuadNoScale);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_FlatQuad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_TranslucentQuad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_SetupOctreeDynamicLightInfo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", MarkOctreeSphereVisible);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_DrawTerrainGroup);

void DRAW_PrepareAreaForDraw(void) {
}

void DRAW_PrepareObjectForDraw(void) {
}

void DRAW_ReleaseObject(void) {
}

void DRAW_ReleaseArea(void) {
}

void DRAW_Init(void) {
}
