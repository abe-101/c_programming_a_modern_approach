#include <stdio.h>

double median(double x, double y, double z)
{
	double median = x;

    if ((x >= y && z <= y) || (z >= y && x <= y))
        middle = y;
    else if ((x >= z && y <= z) || (y >= z && x <= z))
        middle = z;
    return middle;
}

