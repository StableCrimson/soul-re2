#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ClearTfaces);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Deactivate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Reactivate);

void INSTANCE_DeactivatedProcess(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DeactivateFarInstances);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InitInstanceList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_NewInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InstanceGroupNumber);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InsertInstanceGroup);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_AddInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ReallyRemoveInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_CleanUpInstanceList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Introduced);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetIntroCommand);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindIntroCommand);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ProcessIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InitEffects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_IntroduceInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_AdditionalCollideFunctions);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetSplineFrameNumber);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ProcessFunctions);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_StartFade);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DoFade);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_BirthObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Birth);

void INSTANCE_BuildStaticShadow(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DefaultInit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_PlainDeath);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_KillInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Query);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Post);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Broadcast);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_BroadcastAll);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InPlane);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SavedIntroduced);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_StripNameAndNumber);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindWithName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindIntroWithNameFromLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindIntroUniqueID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Find);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_IntroduceSavedInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_IntroduceSavedInstanceWithIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetFromHandle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SetHandle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ValidateWithID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SpatialRelationships);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SetStatsData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_RelativePosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_RelativePositionInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_RelativePositionIntro);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_LinkToParent);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_LinkToParentMarker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DynamicLinkToParentMarker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UnlinkFromParent);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UnlinkChildren);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UpdateFamilyStreamUnitID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ReallyRemoveAllChildren);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetChildLinkedToSegment);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetChildLinkedToMarker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Linked);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetFadeValue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DefaultAnimCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SetModel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SetCurrentStreamUnitID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_HideAllDrawGroups);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UnhideAllDrawGroups);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_HideAllFXDrawGroups);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UnhideAllFXDrawGroups);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_MatchDrawGroups);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_HideUnhideDrawGroup);

INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_HideUnhideFXDrawGroup);
