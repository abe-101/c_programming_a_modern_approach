#include <stdio.h>
#include <ctype.h>

#define SENTANCE_LEN 90

int read_lines(char str[], int n);
float compute_average_word_length(const char *sentance);

int main(void)
{
	char sentance[SENTANCE_LEN];

	printf("Enter a sentance: ");
    read_lines(sentance, SENTANCE_LEN);
    printf("Average word length: %.1f\n", compute_average_word_length(sentance)); 

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

float compute_average_word_length(const char *sentance)
{
    float letters, words = 1;
    const char *p = sentance;

    while (*p++)
        if (*p == ' ')
            words++;
        else
            letters++;
    return letters / words;
}
