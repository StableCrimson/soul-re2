#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_EnableFlyIn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_DisableFlyIn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_CleanUp);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SetPieceHandler);

void SHADES_DefaultDamageEffect(void) {
}

void SHADES_DefaultPerFrameDamageEffect(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_EmergeBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_EmergeBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_FatalBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_FatalBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_KilledBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowInStayEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowInStayExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowInStayCommonHander);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowInStayHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_Emerge);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowOutEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowOutExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowOutHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_FalloverEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_Fallover);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_FalloverHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_HomeUp);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_HomePos);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBackEntryCommon);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBackCommon);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBackEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBackHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnimCommonEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnimEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnim);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnimExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnimHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeSuckBackEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeSuckBack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeSuckAnimEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeSuckAnimHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeIdleEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeIdle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHome);
