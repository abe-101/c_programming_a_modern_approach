#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
	int m, n;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &m, &n);
	printf("The greatest GCD of %d and %d is %d\n", m, n, gcd(m, n));

	return 0;
}

int gcd(int m, int n)
{
	int temp;
	while (n != 0) {
		temp = m % n;
		m = n;
		n = temp;
	}
	return m;
}
