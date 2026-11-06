#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_FillOutVRAMName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_FillOutFileNames);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_AbortAreaLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", FindObjectName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_FindObjectInTracker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_ReportCurrentObjects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_LoadObjectReturn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpMonster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_InList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsSpecialMonster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpSomeMonsters);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_NoMonsters);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_YesMonsters);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_MakeOnlyMonsterList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsMonster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpAMonster);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_TryAndDumpANonResidentObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", InsertGlobalObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetGlobalObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetObjectTracker);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", LoadLevelObjects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsAnInstanceUsingObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_StreamLoadObjectAbort);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpLoadingObjects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpObject);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsObjectInAnyUnit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_RemoveAllObjectsNotInUse);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RemoveAllObjects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetLevelWithID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetStreamUnitWithID);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetStreamUnitWithName);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_CalculateWaterLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsMorphInProgress);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetWaterZLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_PortalDelta);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_ConnectStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_StreamLoadLevelAbort);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DoObjectLoadAndDump);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_FinishLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_LoadLevelReturn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_StreamLoadLevelReturn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_UpdateLevelPointer);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_WhichUnitPointerIsIn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_UpdateObjectPointer);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_UpdateInstanceCollisionInfo);

void STREAM_MoveObjectSoundPointers(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_MoveIntoNewStreamUnit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_LoadLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_RemoveInstancesWithIDInInstanceList);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_MarkUnitNeeded);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpUnit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpAllUnitsNotNeeded);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpAllLevels);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", PreloadAllConnectedUnits);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateCameras);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateSavedCameras);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateLevelWithInstances);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateTerrain);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateVMObjects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocatePlanMarkers);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateSFXMarkers);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_AdjustMultiSpline);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_RelocateInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_OffsetInstancePosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_SetInstancePosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateInstances);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateStreamPortals);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", AddVertex);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetPlaneDist);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", CalcVert);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", AddClippedTri);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetClipRect);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetBspTree);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpNonResidentObjects);

INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_TryAndDumpNonResident);
