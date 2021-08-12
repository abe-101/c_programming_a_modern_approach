#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int vowels = 0;
	char ch;

	printf("Enter a sentance: ");
	
	while ((ch = getchar()) != '\n') {
		switch (toupper(ch)) {
			case 'A': case 'E': case 'I': case 'O': case 'u':
				vowels++;
				break;
		}
	}
	
	printf("Your sentence contains %d vowels.\n", vowels);

	return 0;
}
