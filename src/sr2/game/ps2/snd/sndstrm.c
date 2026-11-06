#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", AllocStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", FreeStream);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Prebuffer);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SndStreamLoadCallback);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_SetBufferSize);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_CreateStream);

void StreamChannelLost_00109408(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Play);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_SetVolume);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Set3DPosition);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SndStreamPoll);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_StopChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Stop);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_IsCueing);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_IsPlaying);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_ReleaseChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_StopAllStreams);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_ReleaseStream);
