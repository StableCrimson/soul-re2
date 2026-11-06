#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", StreamloadCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", STREAM_QueueNonblockingLoads);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", STREAM_PollLoadQueue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_NonBlockingBinaryLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_NonBlockingFileLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_NonBlockingPartOfFileLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ReadFile_FROM_HD);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_HashName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_GetBigFileFileIndex);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ReadFileToBuffer);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ReadFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_OpenFileForInfo);

void LOAD_CloseFileFromInfo(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_FileSize);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_DoesFileExist);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_InitCdLoader);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_NonBlockingBufferedLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_AbortFileLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_FinishLoading);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ObjectFileName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ObjectSoundFileName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_UnitFileName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_MusicFileName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ImageFileName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_SoundStreamFileName);
