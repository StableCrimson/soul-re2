#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_Init);

void FONTSKU_DeInit(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_SetRes);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_GetFontHeight);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_GetTextWidth);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_DrawChar);

void FONTSKU_InitFlush(void) {
}

void FONTSKU_DeInitFlush(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_ChangeColor);
