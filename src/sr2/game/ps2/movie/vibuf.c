#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", getFIFOindex);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", setD3_CHCR);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", setD4_CHCR);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", scTag2);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufCreate);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufReset);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufBeginPut);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufEndPut);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufAddDMA);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufStopDMA);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufRestartDMA);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufDelete);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufIsActive);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufCount);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufFlush);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufModifyPts);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufPutTs);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufGetTs);
