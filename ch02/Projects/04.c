#include <stdio.h>

int main(void)
{
	float price;

	printf( "Enter an amount: ");
	scanf( "%f", &price );
	printf( "With tax added: %.2f\n", price + (price / 20 ));
	return 0 ;
}
