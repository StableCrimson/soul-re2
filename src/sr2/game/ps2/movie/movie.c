#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", ps2_play_movie);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", movie);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", readMpeg);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", switchThread);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", isAudioOK);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", initAll);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", termAll);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", defMain);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", ErrMessage);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", proceedAudio);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", MOVIE_Open);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", MOVIE_Play);

void MOVIE_Close(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", MOVIE_Loaded);
