#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", InitRequests);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", PeekCurrRequest);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", PopRequest);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", EnterRequest);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", EnterFirstRequest);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", EnterRequestFP);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", NewRequest);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", PoolRequest);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", SynchronousCallback);

void SynchronousCallbackDummy(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", FileLoadFunction);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_Alloc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_Free);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_OpenFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_GetFileSize);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_ReadFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_CloseFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_RequestFileData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_RequestFileDataFP);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_CancelRequestFP);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_CancelRequest);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_GetFileData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_GetFileDataFP);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_System);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_FinishLoading);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_IsBusy);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_ReportStatus);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_Shutdown);
