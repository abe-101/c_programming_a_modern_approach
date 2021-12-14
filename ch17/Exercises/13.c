#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_into_ordered_list(struct node *lists,
                                      struct node *new_node)
{
    struct node *cur = list, *prev = NULL;
    while (cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }

    // Special attention is needed When either cur is null (empty list) or prev is null (first node in list).

    if (list == NULL) {
        return new_node;        /* Case where list is empty */
    }
    else if (prev == NULL) {
        list->next = new_node;
        new_node->next = cur;   /* Case where inserting before first node */
    }
    else {
        prev->next = new_node;
        new_node->next = cur;   /* All other cases */
    }
}

