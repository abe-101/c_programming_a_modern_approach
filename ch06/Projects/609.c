#include <stdio.h>

float balance, interest_rate, monthly_interest, monthly_payment;
int i, num_of_payments;

int main(void)
{
	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	printf("Enter number of payments: ");
	scanf("%d", &num_of_payments);


	for (i = 1; i <= num_of_payments; i++) {
		balance = balance - monthly_payment + (balance * interest_rate / 100.0 / 12.0);
		printf("Balance remaining afer %d month(s): $%.2f\n", i, balance);
	}

	return 0;
}
