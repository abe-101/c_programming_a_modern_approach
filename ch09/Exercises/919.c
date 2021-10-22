#include <stdio.h>

void print_binary(int n);

int main(void)
{
	int n;

	printf("Enter an integer to be translated to binary: ");
	scanf("%d", &n);

	print_binary(n); 

	printf("\n");

	return 0;
}

void print_binary(int n)
{
	if (n != 0) {
		print_binary(n / 2);
		putchar('0' + n % 2);
	}
}
	
