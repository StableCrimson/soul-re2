#include "common.h"

void EVENT_Dummy(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_ResetHint);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_StartHint);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_StopHint);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_KillSpecificHint);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_GetCurrentHint);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_ProcessHints);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", MOVIE_PlayIngame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_InitTerrainMovement);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DebugGetAreaNameFromID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DebugGetObjectNameFromID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_ProcessSoundStreams);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_CreateSoundStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DumpSoundStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_PlaySoundStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_PositionSoundStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_StopSoundStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_AnySoundStreamPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_IsSoundStreamPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_IsSoundStreamCueing);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_PlayAmbient);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_IsAmbientPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_UpdateWaterMovement);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_ProcessMovingWater);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_InstanceSplineSet);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_LinkInstanceToBSP);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_TextureMorph);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_GreaterThan);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_LessThan);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_GreaterEqual);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_LessEqual);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_Equal);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_NotEqual);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DisplayString);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_ClearAlarm);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_SetAlarm);

void EVENT_Trace(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DoorInit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DoorAddSpline);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_Random);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DoorAddCamera);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_SetBendMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_StartWaterMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_LinkToParent);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DynamicLinkToParent);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_SetCameraProjDistance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_AttachStartSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_AttachEndSound);
