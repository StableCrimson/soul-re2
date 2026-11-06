#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", AllocTrack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", ReadVarLen);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_InitChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_InitTrack);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_StopSequence);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_ResumeSequence);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_PauseSequence);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_LoadSequence);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Free);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_UpdateSongs);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Init);

void MUSMIDI_DeInit(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_MuteChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_UnMuteChannel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Play);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Stop);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Update);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_NoteOn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_NoteOff);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_AfterTouch);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Controller);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_PatchChange);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_ChannelPressure);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_PitchWheel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_SetSequenceFade);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_SetChannelFade);

INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_UpdateChannel);
