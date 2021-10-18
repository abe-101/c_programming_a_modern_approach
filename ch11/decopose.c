#include <stdio.h>

/*prototypes*/
void decompose(double x, long *int_part, double *frac_part);

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long) x; /* drops the fractional part of x */
    *frac_part = x - int_part;
}
