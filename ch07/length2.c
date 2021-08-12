/* Determines the lenfth of a message */

#include <stdio.h>

int main(void)
{
	int len = 0;

	printf("Enter a message: ");
	while (getchar() != '\n')
		len++;
	printf("Your message was %d charachter(s) long.\n", len);

	return 0;
}
