#include "utils/color.h"

// Creates an RGB color
HawkColor hawk_color_rgb(int r, int g, int b) {
    HawkColor color;
    color.r = r;
    color.g = g;
    color.b = b;
    return color;
}
