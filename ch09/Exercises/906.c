#include <stdio.h>

int digit(int n, int k);

int main(void)
{
	int n, k;

	printf("Enter a number followed by a digit selector: ");
	scanf("%d %d", &n, &k);
	printf("digit selected: %d\n", digit(n, k));

	return 0;
}

int digit(int n, int k)
{
    int digit;

    while (k > 0) {
        digit = n % 10;
        n /= 10;
        k--;
    }
    return digit;
}
