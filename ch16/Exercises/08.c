#include <stdio.h>

struct color {
    int red;
    int green;
    int blue;
};

const struct color MAGENTA_1 = {255, 0, 255};
const struct color MAGENTA_1 = {.red =255, .blue = 255};
