#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", FlushBatch);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", AddCommandToBatch);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", AllocSample);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", FreeSample);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", AllocSRAMChunk);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", FreeSRAMChunk);

void SND_EnumerateDevices(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_AllocChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_GetUserData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetUserData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_FreeChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Shutdown);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", CalcHWVol);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetSample);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_GetSample);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetFrequency);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetReverb);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetReverbType);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetReverbVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_GetFrequency);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Pause);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Restart);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetFrequencyMultiply);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetVolume);

void SND_Set3DPosition(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetPriority);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetLoopMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_GetStatus);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Start);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Stop);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetSRAMType);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", AllocSRAM);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", FreeSRAM);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_AllocSRAM);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_FreeSRAM);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_StartSRAMWalk);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_NextSRAMChunkInfo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_UploadSoundData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_CreateSample);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_UploadSample);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetSampleType);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_FreeSample);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", RetrieveStatus);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetTimerFunc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SystemTimer);
