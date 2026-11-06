#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufCreate);

void voBufDelete(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufReset);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufIsFull);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufIncCount);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufGetData);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufIsEmpty);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufGetTag);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufDecCount);
