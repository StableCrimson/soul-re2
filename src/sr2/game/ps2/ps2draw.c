#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_AddZSortedDrawItemFaster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_InitFXMatrices);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawQuads);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawTriangles);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_InitFXMatrices2D);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawQuads2D);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawTriangles2D);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddTri);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddQuad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddQuadNoTex);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddQuadNoTexHUD);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddSprite);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddLine);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_DrawTerrainStripNew);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_SwapVertexColors);

void PS2_DrawZSortObjectStrip(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_Split_AddTri);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_Split_AddQuad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", Strip_Split_Intpl);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_DrawSplitStrip);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawRingPoints);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_DrawInstance);
