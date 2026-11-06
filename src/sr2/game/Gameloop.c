#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_AllocStaticMemory);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_InitGameTracker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_SystemInit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ResetGameStates);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ClearGameTracker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_LoadingDisplayProcess);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_LoadingDisplayQuery);

void GAMELOOP_LoadingDisplayPost(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_InitLoadingDisplay);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_CloseLoadingDisplay);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_LoadingDisplay);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", LoadLevels);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_InitStandardObjects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_LevelLoadAndInit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_StreamLevelLoadAndInit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_SetScreenWipe);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_HandleScreenWipes);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_GetMainRenderUnit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_DisplayFrame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_DoTimeProcess);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ModeStartRunning);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ModeStartPause);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ModeStartSave);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ChangeMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_RequestLevelChange);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_MainLoop);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_GetMatrices);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_GetGT);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_GetTimeMult);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_IsGlyphOpen);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_IsMenuOpen);
