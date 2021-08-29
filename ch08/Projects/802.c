#include <stdio.h>

int main(void)
{
	int digit, digit_seen[10] = {0};
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	
	while (n > 0) {
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}

	printf("Digit:       0 1 2 3 4 5 6 7 8 9\n");
	printf("Occurrences: "); 
	for (n = 0; n < 10; n++)
		printf("%d ", digit_seen[n]);

	printf("\n");

	return 0;
}
