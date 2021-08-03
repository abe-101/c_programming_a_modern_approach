#include <stdio.h>

int main(void)
{
	int m, n, temp;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);
	for (;;) {
		if (n == 0)
			goto done;
		temp = n;
		n = m % n;
		m = temp;
	}
	done:;
	printf("Greatest common diviser: %d\n", m);
	return 0;
}
