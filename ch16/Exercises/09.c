#include <stdio.h>

struct color {
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green int blue);

int main(void)
{
    return 0;
}

struct color make_color(int red, int green int blue)
{
    struct color c = {red, green, blue};
    if (c.red < 0)
        c.red = 0;
    else if (c.red > 255)
        c.red = 255;
    if (c.green < 0)
        c.green = 0;
    else if (c.green > 255)
        c.green = 255;
    if (c.blue < 0)
        c.blue = 0;
    else if (c.green > 255)
        c.green = 255;

    return c;
}

