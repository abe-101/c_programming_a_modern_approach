#include <stdio.h>

int amount;

int main(void)
{
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	printf( "\n$20 bills: %d\n", (amount / 20));
	amount -= 20 * (amount / 20);
	printf( "$10 bills: %d\n", (amount / 10));
	amount -= 10 * (amount / 10);
	printf( "$5 bills: %d\n", (amount / 5));
	amount -= 5 * (amount / 5);
	printf( "$1 bills: %d\n", (amount / 1));
	amount -= 1 * (amount / 1);

	return 0;
}
