#include <stdio.h>

double inner_product(const double *a, const double *b, int n)
{
    double sum;
    int i = 0;

    while (i++ < n)
        sum += *a++ * *b++;

    return sum;
}
