#include <stdio.h>

int main(void)
{
	float letters, words = 1;
	char ch;

	printf("Enter a sentence: ");
	
	while ((ch = getchar()) != '\n') {
		if (ch == ' ')
			words++;
		else
			letters++;
	}
	printf("Average word length: %.1f\n", letters / words);

	return 0;
}
		
