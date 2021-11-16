#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER(n) ((n)%(4))

int main(void)
{
    printf("The cude of 4 is: %d\n", CUBE(4));
    printf("The Remainder of 18 / 4: %d\n", REMAINDER(18));
}
