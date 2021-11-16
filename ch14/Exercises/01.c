#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER(n) ((n)%(4))
#define IS_LESS(x,y) ((x)+(y)<(100)?(1):(0))

int main(void)
{
    printf("The cude of 4 is: %d\n", CUBE(4));
    printf("The Remainder of 18 / 4: %d\n", REMAINDER(18));
    if (IS_LESS(37,64))
        printf("The sum of 34 and 64 is less than 100\n");
    else
            printf("The sum of 37 and 64 is not less than 100\n");

}
