#include <stdio.h>

int main(void)
{
	int n, i;
	long double fact = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (i = n; i > 1; i--)
		fact *= i;

	  printf("Factorial of %d: %Lf\n", n, fact);

	  return 0;
}

/* Largest value of n that correctly prints its factorial
 * short:	7
 * int:		12
 * long:	20
 * long long: 20 
 * float:	34
 * double:	170
 * long double: 1754 
 */


