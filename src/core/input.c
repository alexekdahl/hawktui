#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include "core/input.h"

// Reads a single character without waiting for Enter to be pressed
char hawk_tui_get_input() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO); // Disable echoing and canonical mode
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
