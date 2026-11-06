#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Default);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Flip);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Push);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Fall);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Verify);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckDirectedLineCollision);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_AnyBlocksInMotion);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_IsAPushBlockAttached);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckForStackedForwardHits);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckSlide);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckSlope);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_NormalToAxis);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_ResetOrientation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_AlignPush);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_SetNewAnim);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckForEnemyInBlkSpot);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckDropOnSlope);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckForValidMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Verify);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Toggle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Set);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Reset);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Rotate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Verify);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_NoHitQuery);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Relocate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Default);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Fall);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Pickup);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Fly);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Collide);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Absorb);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Verify);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Relocate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_WeaponQuery);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Action);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_MorphToWeapon);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Verify);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Verify);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Birth);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Relocate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Verify);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Verify);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Relocate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Collide);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_GetObliqueDirection);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Fly);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Birth);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", MSWITCH_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", MSWITCH_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", MSWITCH_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", MSWITCH_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Pickup);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectInit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectProcess);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectCollide);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectAdditionalCollide);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectQuery);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Post);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectRelocateTune);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Idle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Fall);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_RelocateMotionInterface);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_RelocateWeaponAttributes);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckFamily);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckAbility);

void OBJ_ReportInvalidObject(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_AnimCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_SwitchState);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_GetSplinter);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_PlayDropSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CollideOnlyWithSpheres);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CollideWithAll);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_TurnOffCollision);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_TurnOnCollision);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Gravitate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_BirthProjectile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Throw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_SetTrackingThrowDirection);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_SetThrowDirection);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_SetThrowVelocity);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Realign);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Hover);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CuttingPlane);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_FadeOut);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_BurningTrans);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StartBurning);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StartLighting);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StartBurnFX);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StopLighting);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StopBurning);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_EndBurning);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_EndLighting);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_FindDropAxis);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckRotation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckForStick);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckForShatter);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Drop);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_OpenDoor);

INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CueCamera);
