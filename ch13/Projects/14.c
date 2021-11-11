#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define WORD_LEN 30

// Prototype
bool are_anagrams(const char *word1, const char *word2);
int read_lines(char str[], int n);

int main(void)
{
    char word1[WORD_LEN], word2[WORD_LEN];

	printf("Enter first word: ");
    read_lines(word1, WORD_LEN);
	printf("Enter second word: ");
    read_lines(word2, WORD_LEN);

    // Test for anagrams
    if (are_anagrams(word1, word2))
       	printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int same = 1, letters[26] = {0};
    const char *p1, *p2;
    p1 = word1;
    p2 = word2;

    while (*p1)
    {
        if (isalpha(*p1++))
            letters[toupper(*p1) - 'A']++;
    }
    while (*p2)
    {
        if (isalpha(*p2++))
            letters[toupper(*p2) - 'A']--;
    }
    for (int i = 0; i < 26; i++) {
		if (letters[i] != 0) {
			same = 0;
			break;
		}
	}
    return same;
}


int read_lines(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

