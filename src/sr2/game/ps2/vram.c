#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FindTextureInCache);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FindBehindTextureInCache);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_CalcMipLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_SetupTexturePacketMipMap);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_SetupTexturePacket);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_GetDBP);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_AllocatePreloadedTexture);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadGenericVram);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", TranslateOctreeSpheres);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", TranslateOctreeSpheresBehindTex);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_TransferTerrainToVram);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_TransferObjectToVram);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreeTexture);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreePreloadedTexture);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreeTextureList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreeObjectVram);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreeUnitVram);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_InitVramBlockCache);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_CancelCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadReturn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_ScreenCapture);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadVRM);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadObjectVram);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadUnitVram);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_AllocateTextureNew);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_CreateTexture);
