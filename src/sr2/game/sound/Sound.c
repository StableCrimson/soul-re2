#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndOpenSfxChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndCloseSfxChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndGetSfxChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_ProcessInstanceSounds);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_EndInstanceSounds);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", isOkayToPlaySound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", isSoundEnabledToPlay);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", setPeriodicSoundStateOff);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", processPeriodicSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", processEventSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", processExtendedEventSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StartInstanceSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StopInstanceSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_IsInstanceSoundLoaded);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetInstanceSoundPitch);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetInstanceSoundVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", processOneShotSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_Play3dSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_GetVolumeForPosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_Update3dSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_HandleSignal);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", MUS_AsyncLoadingCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", MUS_AsyncLoadingCallback2);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", MUS_AsyncLoadingBlockCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", MUS_AsyncLoadingAfterBlockCallback);

void MUS_AsyncLoadingCancelCallback(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", StartMusicLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_CheckMusic);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_LoadMusic);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_UpdateReverb);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_UpdateSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_Init);

void SOUND_Free(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetMusicVariable);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetMusicVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetSfxVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetVoiceVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetSFXReverb);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_GetMonoMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetMonoMode);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_PauseAllSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_ResumeAllSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StopAllSound);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StopMusicSlot);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StopMusic);

void SOUND_MusicOff(void) {
}

void SOUND_MusicOn(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SfxOff);

void SOUND_SfxOn(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SndTypeIsPlayingOrRequested);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndPlay);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndEndLoop);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndPlayVolPan);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndUpdateVolPan);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndUpdateVolPanPitch);

void SOUND_PlaneShift(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetMicInstance);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetUnderWater);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_ResetUnderWater);
