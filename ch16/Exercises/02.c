#include <stdio.h>

int main(void)
{
    struct {
        double real;
        double imaginary;
    } c1 = {0.0, 1.0},
      c2 = {1.0, 0.0},
      c3;
    
    printf("Struct c1: real = %.1f, imaginary = %.1f\n", c1.real, c1.imaginary);
    printf("Struct c2: real = %.1f, imaginary = %.1f\n", c2.real, c2.imaginary);
    printf("Struct c3: real = %.1f, imaginary = %.1f\n", c3.real, c3.imaginary);
}

