#include <stdio.h>

struct complex {
    double real;
    double imaginary;
    };

struct complex make_complex(double real, double imaginary)
{
    struct complex newcomplex;
    newcomplex.real = real;
    newcomplex.imaginary = imaginary;

    return newcomplex;
}

int main(void)
{
    struct complex c1, c2, c3;
}
