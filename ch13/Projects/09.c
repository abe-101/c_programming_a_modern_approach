#include <stdio.h>
#include <ctype.h>

#define SENTANCE_LEN 90

int read_lines(char str[], int n);
int compute_vowel_count(const char *sentance);

int main(void)
{
	char sentance[SENTANCE_LEN];

	printf("Enter a sentance: ");
    read_lines(sentance, SENTANCE_LEN);
    printf("Your sentance contains %d vowels.\n", compute_vowel_count(sentance)); 

    return 0;
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

int compute_vowel_count(const char *sentance)
{
	int vowels = 0;
    while(*sentance)
    {
        switch (toupper(*sentance)) {
 			case 'A': case 'E': case 'I': case 'O': case 'u':
				vowels++;
				break; 
        }
        sentance++;
    }
    return vowels;
}
