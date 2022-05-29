#include "tc.h"
#include "event.h"

void executeEvent(event_t e) {
    tc_move_cursor(e.x,e.y);
    // tc_set_foreground_color(e.fr,e.fg,e.fb);
    // tc_set_background_color(e.br,e.bg,e.bb);
    printf("%c",e.c);
    // tc_reset_modes_colors();
}
