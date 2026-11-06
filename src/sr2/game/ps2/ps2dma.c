#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_WaitForChannelMask);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_TimeTransfer);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_StartTransfer);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_VIFComplete);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_GIFComplete);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Setup);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_End);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Send);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Flush);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Sync);
