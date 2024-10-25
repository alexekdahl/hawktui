#include "hawk_tui.h"

int main() {
    hawk_tui_init();

    HawkButton* button = hawk_button_create("Click me!");
    button->x = 5;
    button->y = 5;

    while (1) {
        hawk_button_render(button);
        if (hawk_tui_get_input() == 'q') {  // Press 'q' to quit
            break;
        }
        if (hawk_tui_get_input() == 'a') {  // Press 'q' to quit
            hawk_tui_init();
            HawkButton* button2 = hawk_button_create("Click me2!");
            button->x = 10;
            button->y = 10;
            hawk_button_render(button2);
        }
    }

    hawk_tui_cleanup();
    return 0;
}
