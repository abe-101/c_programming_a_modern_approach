#include <stdio.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

//Prototypes
int compute_area(struct rectangle r);


int main(void)
{
    struct point upper_left = {5, 5};
    struct point lower_right = {15, 10};
    struct rectangle r1 = {upper_left, lower_right};
    printf("Area: %d\n", compute_area(r1));
    return 0;
}


int compute_area(struct rectangle r)
{
    return (r.lower_right.x - r.upper_left.x) * (r.lower_right.y - r.upper_left.y);
}
