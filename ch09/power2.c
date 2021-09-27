#include <stdio.h>

int power(int x, int n);

int main(void)
{
	int x, n;

	printf("Compute Xn using the formula Xn = X x Xn-1\n");
	printf("Enter X: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);

	printf("Results: %d\n", power(x, n));
	
	return 0;
}

int power(int x, int n)
{
		return n == 0 ? 1 : x * power(x, n - 1);
}

