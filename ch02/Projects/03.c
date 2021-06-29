#include <stdio.h>

#define PI 3.14159
#define FRACTION 4.0f/3.0f

int main(void)
{
	float vol, radius;
   
	printf( "Please enter the radius: \n");
	scanf( "%f", &radius );
	vol	= FRACTION * ( PI * (radius * radius * radius));
	printf("%.2f\n", vol);

	return 0 ;
}
