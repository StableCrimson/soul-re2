#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_ReportFreeMemory);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Size);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_ReportTotalMemory);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_MallocAlign);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Malloc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_ChainMalloc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Free);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_ReportMemory);

void MEMPACK_VerifyIntegrityOfMemory(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_VerifyMemoryChain);

INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Remalloc);
