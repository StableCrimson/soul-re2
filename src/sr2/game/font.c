#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONTMEM_Alloc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONTMEM_FreeAll);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_ConvertCursor);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_AddEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_PrintFormatted);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetCursor);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_GetCursor);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_Print);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_Print2);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_GetHeight);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_Flush);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetColorIndex);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetColorIndexCol);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetAlpha);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetYScale);

void FONT_ReloadFont(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_GetStringWidth);

INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_PrintCentered);
