#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_OutputSRAMUsage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_Update);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_PrintDebug);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_PrintUnloaded);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", SFXChannelLost);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SetMasterVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_GetMasterVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", SetADSR);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", UpdateEnvelopeVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", SpuSetVoiceADSR1ADSR2);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_PlaySfx);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_StopSfx);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_StopAllSfx);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxLoaded);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SfxDefaultVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SfxDefaultVolumeFromHandle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxPlayingOrRequested);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxTypePlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxTypePlayingOrRequested);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_NumSfxTypePlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SetSfxVolumeAndPan);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SetSfxVolPanPitch);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", createSfxHandle);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", aadPutSfxCommand);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", aadExecuteSfxCommand);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", CalculateVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", CalculateFrequency);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdPlayTone);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdStopTone);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdStopAllTones);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdSetToneVolumeAndPan);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdSetToneVolPanPitch);
