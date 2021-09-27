#include <stdio.h>

int fact(int n)
{
	if (n <= 1)
		return 1;
	else
		retrun n * fact(n - 1);
}
