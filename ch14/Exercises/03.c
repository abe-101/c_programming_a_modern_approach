#include <stdio.h>

#define DOUBLE(x) 2*x

int main(void)
{
    printf("The value of DOUBLE(1+2) is %d\n", DOUBLE(1+2));
    printf("The value of 4/DOUBLE(2) is %d\n", 4 / DOUBLE(2));
}

// The proper definition of DOUBLE is: #define DOUBLE(x) ((2)*(x))
