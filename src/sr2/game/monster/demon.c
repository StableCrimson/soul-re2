#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_SetPieceHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_BehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_ReturnBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_ReturnBehaviorEntry);

void DEMON_ReturnBehaviorExit(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_EmergeBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_EmergeBehaviorEntry);

void DEMON_EmergeBehaviorExit(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_GoHomeBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_GoHomeBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_GoToValidUnitBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_ReturnImmediateBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_ReturnImmediateBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_PupateEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_Pupate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_PupateExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_EmergeEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_Emerge);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportInEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportInHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportInExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportInStayHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportOutEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportOutExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportOutHandler);
