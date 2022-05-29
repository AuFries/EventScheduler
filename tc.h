//GIVES ANSI FUNCTIONALITY TO THE TERMINAL

#ifndef TC_H
#define TC_H

#define tc_invisible_cursor() printf("\e[?25l")
#define visible_cursor() printf("\e[?25h")
#define tc_clear_screen() puts("\x1B[2J")

#define tc_move_cursor(X, Y) printf("\033[%d;%dH", Y, X)

#define tc_set_foreground_color(r,g,b) printf("\e[38;2;%d;%d;%dm", r, g, b)
#define tc_set_background_color(r,g,b) printf("\e[48;2;%d;%d;%dm", r, g, b)
#define tc_reset_modes_colors() printf("\e[0m")


#endif