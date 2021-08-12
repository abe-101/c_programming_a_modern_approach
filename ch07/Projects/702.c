/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
	int short i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar(); //removes the newlive charecter from buffer

	for (i = 1 ; i <= n ; i++) {
		printf("%10d%10d\n", i, i * i);
		
		if (i % 24 == 0) {
			printf("Press enter to continue...");
			while (getchar() != '\n')
				;
		}
	}
	
	return 0;
}
