#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetBuffer);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetInstanceRotation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_ClearMemory);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedBlock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_PurgeAMemoryBlock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SaveableInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UpdateSavedIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UpdateSavedIntroWithIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedEvent);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_DeleteSavedEvent);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedNextEvent);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_BufferIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_IntroduceBufferIntros);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_IntroForStreamID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_HasSavedIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_HasSavedLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UpdateLevelWithSave);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_CreatedSavedLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_DeleteBlock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_Instance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_DeleteInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SetDeadDeadBit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_IsUniqueIDDeadDead);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_IsIntroDeadDead);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_DoInstanceDeadDead);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_MarkDeadDead);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UndestroyInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedSmallIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetIntroSpline);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UpdateGlobalSaveTracker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_RestoreGlobalSaveTracker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SaveEverythingInMemory);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SaveGame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_RestoreGame);

void SAVE_DebugSaveGame(void) {
}

void SAVE_DebugRestoreGame(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_LoadSaveGame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SizeOfFreeSpace);
