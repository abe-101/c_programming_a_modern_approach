#include <stdio.h>

int main(void)
{
	const char *number[100] = {"", "One", "Two", "Three", "Four",
                          "Five", "Six", "Seven", "Eight", "Nine",
                          "Ten", "Eleven", "Twelve", "Thirteen",
                          "Fouteen", "Fifteen", "Sixteen", "Seventeen",
                          "Eighteen", "Nineteen", "Twenty",
                          [30] = "Thirty", [40] = "Forty",
                          [50] = "Fifty", [60] = "Sixty",
                          [70] = "Seventy", [80] = "Eighty",
                          [90] = "Ninety"};
    int n;

	printf("Enter a two-digit number: ");
	scanf("%d", &n);
	printf("You entered the number ");
    
	if (n / 10 == 1) {
        printf("%s", number[n]);
    } else {
        printf("%s %s", number[n - n % 10], number[n %10]);
    }
    printf("\n");
}


