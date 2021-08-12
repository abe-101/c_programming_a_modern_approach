#include <stdio.h>

int main(void)
{
	float num, total;
	char ch;

	printf("Enter an expression: ");
	scanf("%f", &total);

	while ((ch = getchar()) != '\n') {
		switch (ch) {
			case '+':
				scanf("%f", &num);
				total += num;
				break;
			case '-':
				scanf("%f", &num);
				total -= num;
				break;
			case '*':
				scanf("%f", &num);
				total *= num;
				break;
			case '/':
				scanf("%f", &num);
				total /= num;
				break;
			default:
				continue;
				}
	}

    printf("Value of expression: %.2f\n", total);

	return 0 ;
}

