#include <stdio.h>

#define PI 3.14159
#define FRACTION 4.0f/3.0f

int main(void)
{
	float vol;
   
	vol	= FRACTION * ( PI * (10 * 10 * 10));
	printf("%.2f\n", vol);
}
