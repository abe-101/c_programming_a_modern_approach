#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node {
    struct node *next;
    char word[];
};

struct node *line = NULL;

int line_len = 0;
int num_words = 0;

void clear_line(void)
{
    // free all nodes
    struct node *temp;
    while (line) {
        temp = line;
        line = line->next;
        free(temp);
    }
    line = NULL;
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    int word_mem = strlen(word) + 1;
    
    //Declare and malloc a new word node
    struct node *new_word;
    if ((new_word = malloc(sizeof(struct node) + word_mem)) == NULL) {
        printf("Error: mallof failed.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(new_word->word, word);
    new_word->next = NULL;

    struct node **pp = &line;
    while(*pp)
        pp = &(*pp)->next;

    *pp = new_word;
    line_len += strlen(word);
    //Factor in a space for every word after the first
    if (num_words > 0)
        line_len++; 
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i;
    int char_count = 0;
    struct node *entry = line;
    extra_spaces = space_remaining();

    while (char_count < line_len && entry) {
        printf("%s", entry->word);
        if (num_words > 1) {
            spaces_to_insert = extra_spaces / (num_words - 1);
            for (i = 1; i <= spaces_to_insert + 1; i++)
                putchar(' ');
            extra_spaces -= spaces_to_insert;
        }
        char_count += strlen(entry->word) + 1;
        num_words--;
        entry = entry->next;
    }
    putchar('\n');
}

void flush_line(void)
{
    if (line_len > 0) {
        struct node *entry = line;
        int i;
        for (i = 0, entry = line; entry; i++, entry = entry->next) {
            if (i > 0 && entry->next != NULL)
                putchar(' ');
            printf("%s ", entry->word);
        }
    }
    printf("\n");
    clear_line();
}
