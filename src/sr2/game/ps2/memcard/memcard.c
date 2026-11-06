#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", Ascii2Sjis);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", AsciiString2Sjis);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_CreateFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_WriteFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_ReadFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_WriteIcon);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_Init);

void MEMCARD_DisplayInfo(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_DoPushMenu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_ClearError);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_DoPopMenu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_InvalidFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitExitLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitExitSave);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_ExitLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_ExitSave);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitLoadFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_LoadFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_LoadMenu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", do_memcard_load_menu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", wait_memcard_load_menu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_SaveFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_OverwriteFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_SaveComplete);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitSaveFile);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_FormatCard);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitFormatCard);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_FormatMenu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_OverwriteMenu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_DoOverwriteMenu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_SaveMenu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_InitSaveMenu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", do_memcard_save_menu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", wait_memcard_save_menu);
