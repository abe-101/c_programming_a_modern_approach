#include <stdio.h>

int main(void)
{
	int i;
	int fib_numbers[40] = {0, 1};

	for (i = 2; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++) {
		fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
		printf("Fibonacci #%d is %d\n", i, fib_numbers[i]);
	}
	return 0;
}
