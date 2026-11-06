#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateAnimCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", InitMessageQueue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", DeMessageQueue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", RemoveIDsFromMessageQueue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", PurgeMessageQueue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", PeekMessageQueue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", EnMessageQueue);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", EnMessageQueueData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", CIRC_Alloc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetCollideInfoData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterHitData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterThrownData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterAlarmData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterSoulSuckData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterImpaleData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterDecapData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectDataI);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPositionData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPositionDataV4f);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsGravityData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsEdgeData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsSwimData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsDropOffData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsSlideData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsWallCrawlData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsLinkedMoveData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsDropHeightData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetAnimationControllerDoneData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", EvtSetAnimationInstanceSwitchData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetAnimationInstanceSwitchData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetFXHitData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetCollideInstanceStatsData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectThrowData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectBreakOffData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectDoorData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectSoundData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetControlInitHangData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetControlInitIdleData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectDraftData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectAbsorbData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetControlSaveDataData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectIdleData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetActionLookAroundData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", EvtSetActionPlayHostAnimationData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetActionPlayHostAnimationData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectBirthProjectileData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetShadowSegmentData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterAllyData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterFatalityInterface);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetActionBlockAttackData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetCollideForceData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterCompleteAttackData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstancePlayAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulatePlayAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceToInstanceSwitchAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSwitchAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSwitchAnimationAlpha);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimationAlpha);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimationSync);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceToInstanceSwitchAnimationCharacter);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimationCharacter);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimationCharacterAlpha);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetAnimationLastFrame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetAnimSpeed);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetControllerAlpha);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationQueryAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryAnimLength);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryFrame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryLastFrame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryPassedFrame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationQueryFrame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationQueryMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetStartAndEndSegment);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetStartAndEndSegment);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetTotalSections);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetTotalSections);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceInitSection);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInitSection);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationQueryInstanceAnimation);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetInterpController_Vector);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSwitchStateDataDefault);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSwitchStateCharacterDataDefault);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSwitchStateData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSwitchStateCharacterData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSetStateCharacter);

INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateGovernState);
