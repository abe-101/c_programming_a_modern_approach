#include <stdio.h>

int main(void)
{
	int num, denom, m, n, temp;

	printf("Enter a fraction: ");
	scanf("%d /%d", &num, &denom);

	m = num;
	n = denom;

	for (;;) {
		if (n == 0)
			goto done;
		temp = n;
		n = m % n;
		m = temp;
	}
	done:;
	printf("In lowest terms: %d/%d\n", num / m, denom / m);
	return 0;
}
