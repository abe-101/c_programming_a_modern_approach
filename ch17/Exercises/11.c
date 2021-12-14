#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int count_occurrences(struct node *list, int n)
{
    int total = 0;

    while (list) {
        if (list->value == n)
            total++;
        list = list->next;
    }
    return total;
}
