#include <stdio.h>

int main(void)
{
	int n, i = 1, j = 2;
	printf("Choose an operator:\n"
			"1. Greater than (>)\n"
			"2. Less than (<)\n"
			"3. Equal to (==)\n");
	scanf("%d", &n);

	switch (n) {
		case 1:
			printf("(i > j) - (i < j) Computes: %d\n", (i > j) - (i < j));
			break;
		case 2:
			printf("(i < j) - (i > j) Computes: %d\n", (i < j) - (i > j));
			break;
		case 3:
			printf("(i == j) - (i == j) Computes: %d\n", (i == j) - (i == j));
			break;
	}
	return 0;
}
