#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i, same = 1, letters[26] = {0};
	char ch;

	printf("Enter first word: "); {
	while ((ch = getchar()) != '\n')
		if (isalpha(ch))
			letters[toupper(ch) - 'A']++;
	}

	printf("Enter second word: "); {
	while ((ch = getchar()) != '\n')
		if (isalpha(ch))
			letters[toupper(ch) - 'A']--;
	}

	for (i = 0; i < 26; i++) {
		if (letters[i] != 0) {
			same = 0;
			break;
		}
	}

	if (same)
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	return 0;
}
