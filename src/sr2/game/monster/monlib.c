#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SwitchState);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetTime);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ClearDataPostBehavior);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ClearDataPerFrame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FacingOffset);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RelativePosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MakeSpatialMatrix);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InArc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InWedge);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOffWeaponSpheres);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOnWeaponSphere);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOffBodySpheres);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOnBodySpheres);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOffAllSpheres);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindSphere);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SegIsRelated);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RemoveChildSpheres);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ThrowLinkedObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ThrowInstancesLinkedToChildSegs);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TransNodeAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetAnim);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetNumSections);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetSectionEnd);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimFromList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimIDPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimIDIfNotPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimPlayingFromList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimFromListIfNotPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnim);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimIfNotPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetAnimMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimInit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimAvailable);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PerFramePlayAnim);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ForwardFoot);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LockSegmentCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LockFootCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayRandomIdle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayCombatIdle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoParry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CanEvade);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CanBlock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseEvadeBlockMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckConditions);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldEvadeBlock);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EvadeAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ClosestValidMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseLeftRightOrBack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseGuardReturnMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseGuardMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseFatalEvadeMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOnAutofaceDraw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOffAutofaceDraw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_NewAttackChoice);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupTauntChance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupAttackChance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupEvadeChance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupFireChance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupChance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ValidAttackSegment);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AttackHasValidSegment);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AllAttacksInStreamHaveValidSegment);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChoosePreferredAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseRunAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AttackerInWedge);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_VictimInWedge);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CanAttackStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseOpportunityAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PreventAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldAttackFlags);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckAttackStreamInitiateConditions);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldAttackStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TryAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LaunchAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StopAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_WithinGuardRangeCommon);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CombatMovePosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CombatMoveWithinGuardRange);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindCombatMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetLineOfSight);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MoveIntoStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetOutOfTheWay);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GuardReturnMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseCombatMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseAvoidanceMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RepositionForAttack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseCombatRole);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseTaunt);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TryTaunt);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseMissile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldFire);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CountInstancesNotDead);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseSpawn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldSpawn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SpawnObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldAmbush);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetAmbushCocoon);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckValidUnit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetRandomPoint);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetRandomDestinationInWorld);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CloseEnough);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ApplyPhysics);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnAnimToAngle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnAnimToPosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnToPosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_OnGround);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckTerrain);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckTerrainAndRespond);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InSwampWater);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckEnvironment);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckPointSuitability);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckInstancePosSuitability);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ValidUnit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ValidPosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindPatrolMarkerPosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetBehaviorOrigin);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TransitionIntoWater);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TransitionOutOfWater);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetProportionalTurnSpeed);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_BirthSoul);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_BirthSoulIfNecessary);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DropAllObjects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_BirthMana);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_KillMonsterNoSFX);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_KillMonster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindImpaler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RestoreDeath);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FatalityMask);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetFatality);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetRotToFatalRot);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoClaw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoDecapitate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoImmolate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoShatter);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetDeadDead);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetWeapon);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetAccessories);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetKey);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindAccessoryFromId);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MarkAccessory);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ProcessIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetDefaults);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InitIK);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DeleteIK);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InitCloth);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DeleteCloth);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MoveToBirthMarker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EnableHeadMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DisableHeadMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", gccfix_SetController1);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", gccfix_SetController2);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LookInDirection);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LookAtPos);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ProcessLookAt);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldBlockSave);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetUpSaveInfo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindLimbAccessory);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RemoveAccessoryFaces);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RestoreChops);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetSaveInfo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RelocateCoords);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetHitIndex);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetHitReactionIndex);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetUpKnockBack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetReaction);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleFatalMessage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GrabImpaler);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SphereWorldPos);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindSphereForTerrain);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindNearestImpalingIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TestForTerrainImpale);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MoveInstanceToImpalePoint);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ReachableIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetVelocityTowardsImpalingObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckLethalPhysobs);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GrabPos);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ClosestLimb);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LimbChop);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleHitMessageShared);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleHitMessage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleReaverHitMessage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleBlockedHitMessage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LoseStamina);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LoseDizzy);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TakeDamage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PerFrameDamageStuff);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_IsDead);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_IsDying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetFallDamage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LandOnGroundDamage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PrepLaunchMonsterCheck);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PrepLaunchMonster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LaunchMonster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_UnlinkFromGrabber);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ProcessSpecialFade);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartSpecialFade);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetNoDraw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetDraw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoDrainEffects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetFXHitData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MonsterGlow);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CalcDamageIntensity);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InitVertexColors);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ProcessClosestVerts);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", ProcessBloodyMess);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartVertexBlood);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_VertexBlood);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", ProcessBurntMess);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartVertexBurnt);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_VertexBurnt);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LoseLimb);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartDamageEffect);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndDamageEffectIfAppropriate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndDamageEffect);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CutOut_Monster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SplodeEffect);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartInstanceEffects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndInstanceEffects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InitSchedule);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AddToSchedule);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RemoveFromSchedule);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_UpdateSchedule);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_IsScheduled);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EnableIK);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DisableIK);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlaySound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetStreamForHolder);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AddStreamHolder);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RemoveStreamHolder);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndSounds);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_UpdateSounds);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayVOFromStateEntry);

INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetPursuitTargetFromBehavior);
