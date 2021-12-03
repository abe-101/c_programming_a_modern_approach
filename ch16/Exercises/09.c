#include <stdio.h>
#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green int blue);
int getRed(struct color c);
bool equal_color(struct color color color1, struct color colo2);
struct color brighter(struct color c);

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

int getRed(struct color c)
{
    return c.red
}

bool equal_color(struct color color1, struct color colo2)
{
    return (  color1.red == color2.red
           && color1.green == color2.green
           && color1.blue == color2.blue
           );
}


