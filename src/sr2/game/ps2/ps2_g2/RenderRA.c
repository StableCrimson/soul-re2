#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", InitBlit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", Gs_Initialize);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_Init);

void RenderG2_ShutDown(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_GetBlitTag);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetHalfOffset);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_BeginScene);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_EndScene);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetFog);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetBGColor);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetBlitColor);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_MotionBlur);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_Message);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetupDevCons);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_ClearBuffer);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_InitSpecialTextures);
