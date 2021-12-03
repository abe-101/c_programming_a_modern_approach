#include <stdio.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

//Prototypes
int compute_width(struct rectangle r);
int compute_height(struct rectangle r);
int compute_area(struct rectangle r);
struct point compute_center(struct rectangle r);
struct rectangle shift_rectangle(struct rectangle move, int x, int y);

int main(void)
{
    struct point upper_left = {5, 5};
    struct point lower_right = {15, 10};
    struct rectangle r1 = {upper_left, lower_right};
    printf("Area: %d\n", compute_area(r1));
    struct point center = compute_center(r1);
    printf("Center: %d,%d\n", center.x, center.y);
    struct rectangle r2 = shift_rectangle(r1, 10, 10);
    struct point center2 = compute_center(r2);
    printf("Center: %d,%d\n", center2.x, center2.y);

    return 0;
}


int compute_width(struct rectangle r)
{
    return r.lower_right.x - r.upper_left.x;
}

int compute_height(struct rectangle r)
{
    return r.lower_right.y - r.upper_left.y;
}

int compute_area(struct rectangle r)
{
    return compute_width(r) * compute_height(r);
}

struct point compute_center(struct rectangle r)
{
    struct point center;
    center.x = r.upper_left.x + compute_width(r) / 2;
    center.y = r.upper_left.y + compute_height(r) / 2;
    return center;
}

struct rectangle shift_rectangle(struct rectangle move, int x, int y)
{
    move.upper_left.x += x;
    move.upper_left.y += y;
    move.lower_right.x += x;
    move.lower_right.y += y;

    return move;
}
