#include <stdio.h>
#include <ctype.h>

#define WORD_LEN 30

int read_lines(char str[], int n);
int compute_scrable_value(const char *word);

int main(void)
{
	char word[WORD_LEN];

	printf("Enter a word: ");
    read_lines(word, WORD_LEN);
    printf("Scrabble value: %d\n", compute_scrable_value(word)); 

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

int compute_scrable_value(const char *word)
{
	int scrable_value = 0;
    while(*word)
    {
        switch (toupper(*word)) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case '0': case 'R': case 'S': case 'T': case 'U':
                scrable_value += 1;
                break;
            case 'D': case 'G':
                scrable_value += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                scrable_value += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                scrable_value += 4;
                break;
            case 'K':
                scrable_value += 5;
                break;
            case 'J': case 'X':
                scrable_value += 8;
                break;
            case 'Q': case 'Z':
                scrable_value += 10;
                break;
        }
        word++;
    }
    return scrable_value;
}
