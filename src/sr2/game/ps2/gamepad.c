#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_SetupController);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_HandleDualShock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", PSXPAD_TranslateData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_GetPS2Data);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_GetData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Commands);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Shock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Shock0);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Shock1);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_ControllerIsDualShock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_DualShockEnabled);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_DisableDualShock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_EnableDualShock);

void GAMEPAD_Shutdown(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_SaveControllers);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_RestoreControllers);
