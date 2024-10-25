#ifndef COLOR_H
#define COLOR_H

typedef struct {
    int r, g, b;
} HawkColor;

// Creates an RGB color
HawkColor hawk_color_rgb(int r, int g, int b);

#endif // COLOR_H
