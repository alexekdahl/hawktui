#ifndef BUTTON_H
#define BUTTON_H

typedef struct {
    int x, y;
    char* label;
} HawkButton;

// Creates a new button
HawkButton* hawk_button_create(const char* label);

// Renders the button
void hawk_button_render(HawkButton* button);

#endif // BUTTON_H
