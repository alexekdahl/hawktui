#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "core/engine.h"
#include "core/render.h"
#include "core/input.h"

// Initializes the HawkTUI library
void hawk_tui_init() {
    printf("\033[2J\033[H");  // Clear the screen and move the cursor to home
}

// Runs the main event loop
void hawk_tui_main_loop() {
    while (1) {
        // Render the screen
        hawk_tui_render_screen();

        // Handle input
        if (hawk_tui_get_input() == 'q') {  // 'q' to quit
            break;
        }

        usleep(100000); // Delay for 100ms
    }
}

// Cleans up HawkTUI resources
void hawk_tui_cleanup() {
    printf("HawkTUI cleaned up.\n");
}
