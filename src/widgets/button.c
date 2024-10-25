#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "widgets/button.h"

// Creates a new button
HawkButton* hawk_button_create(const char* label) {
    HawkButton* button = malloc(sizeof(HawkButton));
    button->x = 0;
    button->y = 0;
    button->label = strdup(label);
    return button;
}

// Renders the button
void hawk_button_render(HawkButton* button) {
    printf("\033[%d;%dH[%s]", button->y + 1, button->x + 1, button->label);  // Move cursor and print label
}
