#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", MENU_Init);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_data_size);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_initialize);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_format);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", MENU_Set);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_push);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_pop);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_draw_fn);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_item);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_build);

void DisplayHintBox(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", DisplayMenuBox);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_draw_item);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", MENU_Draw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_run);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", MENU_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_play_movie);
