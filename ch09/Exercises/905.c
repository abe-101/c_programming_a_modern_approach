#include <stdio.h>

int num_digit(int n);

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d has %d digits\n", n, num_digit(n));

	return 0;
}

int num_digit(int n)
{
	int i = 0;
	while (n > 0) {
		n = n / 10;
		i++;
	}
	return i;
}

