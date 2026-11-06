#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_Query);

void AMBIENT_DamageEffect(void) {
}

void AMBIENT_PerFrameDamageEffect(void) {
}

void AMBIENT_CleanUp(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_BehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_NewPosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_ConstrainedHeading);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_GetFreeDirection);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_SetHeadingTo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_GetRandomDestination);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_WanderBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_WanderBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_WanderBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_FleeBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_FleeBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_FleeBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_BehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_HopBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_HopBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_HopHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_StartHopFrom);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_FleeEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_FleeHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_StartHopTo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_WanderEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_WanderHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", RAT_Flee);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", RAT_WanderEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", RAT_Wander);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_CheckOnGround);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_SitOnGround);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_BehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_GetFlightVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_GetRandomBirdDestination);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandingBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandingBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_FleeBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_FleeBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderBehaviorShouldContinue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_GetFreeDirection);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_SetHeadingTo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_SetHeadingFrom);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_RiseEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Rise);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_RiseHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_RisingEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Rising);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_FleeEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Flee);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_FleeHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandingEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Landing);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderRise);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderRiseHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderRising);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Fly);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Wander);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_LandBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Rise);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Rising);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Flee);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Landing);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_WanderRise);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_WanderRising);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Wander);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_CleanUp);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_BehaviorStack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_WanderBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpBehaviorEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpingBehaviorShouldRun);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpExit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpHandler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_SetPitch);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_ZBound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_SetFleeDestination);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_SetVel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_Move);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_FleeEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_Flee);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_GetSwimVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_SetWanderDestination);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_WanderEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_Wander);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_WanderIdleEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_WanderIdle);
