#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_StreamUnitsInfo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_UpdateHealth);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_UpdateMana);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_FillUpHealth);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_SendCinematicSwitch);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_SendMoveTo);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_ClearCheats);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_process_cheat_codes);

void DEBUG_Init(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_Process);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_MenuCountLength);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_ExitMenus);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", get_last_menu_line);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", num_menu_items);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", maybe_change_menu_choice);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_float);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_long);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_short);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_byte);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_signed_byte);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_segment_byte);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_bit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_action);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_action_with_line);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", handle_line_type_menu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", process_menu_line);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", pre_process_functions);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", post_process_functions);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", ourisdigit);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", adjust_format);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", find_eol);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", draw_menu_item);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", draw_menu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_Menu);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_QuitGame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_ContinueGame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_ExitGame);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_ReloadCurrentLevel);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_LevelSelectNew);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_MusicSelectNew);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_FatalError);

void DEBUG_ProcessSecondController(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_ProcessCheat);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_UpdateFog);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_FogLoad);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_FogRestore);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_Draw);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_DisplayStatus);

void DEBUG_DrawLine(void) {
}

void DEBUG_DrawLineQueue(void) {
}

void DEBUG_DrawScreenRect(void) {
}

void DEBUG_DrawRectQueue(void) {
}

void DEBUG_CaptureScreen(void) {
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_FlyCam);

INCLUDE_ASM("asm/nonmatchings/sr2/game/debug", DEBUG_ToggleFreeze);
