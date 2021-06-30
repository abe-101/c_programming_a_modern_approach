#include <stdio.h>

float balance, interest_rate, monthly_interest, monthly_payment;

int main(void)
{
	printf( "Enter amount of loan: " );
	scanf( "%f", &balance );
	printf( "Enter interest rate: " );
	scanf( "%f", &interest_rate );
	printf( "Enter monthly payment: " );
	scanf( "%f", &monthly_payment );

	monthly_interest = (interest_rate / 100.0) / 12.0;

	printf("\nBalance remaining after first payment: %.2f\n",
			(balance = balance - monthly_payment + (balance * monthly_interest)));
	printf("Balance remaining after second payment: %.2f\n",
			(balance = balance - monthly_payment + (balance * monthly_interest)));
	printf("Balance remaining after third payment: %.2f\n",
			(balance = balance - monthly_payment + (balance * monthly_interest)));
	return 0;
}
