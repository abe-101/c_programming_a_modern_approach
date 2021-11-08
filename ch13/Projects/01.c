#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

void read_line(char str[], int n);

int main(void)
{
    char current_word[WORD_LEN+1],
         smallest_word[WORD_LEN+1],
         largest_word[WORD_LEN+1];

    printf("Enter word: ");
    read_line(current_word, WORD_LEN);
    strcpy(smallest_word, strcpy(largest_word, current_word));


    while (strlen(current_word) != 4) {
        printf("Enter word: ");
        read_line(current_word, WORD_LEN);
        if (strcmp(current_word, smallest_word) < 0)
            strcpy(smallest_word, current_word);
        if (strcmp(current_word, largest_word) > 0)
            strcpy(largest_word, current_word);
    }
    printf("\nSmallest word: %s\n", smallest_word);
    printf("largest word: %s\n", largest_word);
    
    return 0;    
}

void read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
}

