#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SetCurrentBehaviorData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CheckBehaviorAndSwitch);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ResetBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreBehaviorLineFunc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreBehaviorLine);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreIntroCommandBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreIntroBehaviors);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreSpecBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreDefaultBehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ReplaceSingleBehaviors);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FindLastIntroInitialBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FindInitialBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreInitialBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreTriggeredBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreActiveBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SetSkip);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_DefaultBehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_BuildBehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_InitialBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_AmbientBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PupateBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_AmbushBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_DeadBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_WanderBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_WanderBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PatrolBehaviorAtCurrentMarker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PatrolBehaviorIncrMarker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PatrolBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PatrolBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CombatBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CombatBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CombatBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CombatBehaviorExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ProjectileBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ProjectileBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SpawnBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SpawnBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FleeBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FleeBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FleeBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StandIdleBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_TrackBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_TrackBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_TrackBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RunAttackBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RunAttackBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RunAttackBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PursueRunEndBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PursueRunEndBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SkipIfNoEnemyBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SkipIfNoEnemyBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ReviveBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ReviveBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_KilledBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_KilledBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_GrabbedBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_GrabbedBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PhysMoveEndBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PhysMoveEndBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ThrownBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ThrownBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FallBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FallBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_HitBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_HitBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_HitBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_BlockedHitBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_BlockedHitBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_BlockedHitBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_DismemberBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_DismemberBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FatalBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FatalBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_HitToFatalBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunToFatalBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunToFatalBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunnedBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunnedBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunnedBehaviorExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RecoverBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RecoverBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PuppetBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PuppetBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ParryBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ParryBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_NoticeBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_NoticeBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_GoToValidUnitBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_GoToValidUnitBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_LookAroundBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_LookAroundBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_LookAroundBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_OtherPlaneBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_OtherPlaneBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RestoreBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RestoreBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_MoveToPosBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_MoveToPosBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_MoveToPosBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SpawnedBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SpawnedBehaviorEntry);
