#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_CommonRenderLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_RenderNoCullGroups);

INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_GetUnitFog);

INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_CalculateFogging);

INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_DeterminePortals);

INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_DrawUnits);

INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_IntroduceInstances);

INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_Process);
