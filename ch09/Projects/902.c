#include <stdio.h>

float tax_cal(float n);

int main(void)
{
	float income;

	printf("Enter taxable income: $");
	scanf("%f", &income);

	printf("Tax due: $%.2f\n", tax_cal(income));

	return 0;
}

float tax_cal(float n) {

	if (n <= 750.00f)
		return .01f * n;
	else if (n <= 2250.00f)
		return 7.50f + (.02f * (n - 750.00f));
	else if (n <= 3750.00f)
		return 37.50f + (.03f * (n - 2250.00f));
	else if (n <= 5250.00f)
		return 82.50f + (.04f * (n - 3750.00f));
	else if (n <= 7000.00f)
		return 142.50f + (.05f * (n - 5250.00f));
	else
		return 230.00f + (.06f * (n - 7000.00f));
}


