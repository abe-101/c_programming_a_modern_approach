#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_into_ordered_list(struct node *list,
                                      struct node *new_node)
{
    // Special attention is needed When either cur is null (empty list) or prev is null (first node in list).
    
    // Case where list is empty
    struct node *cur = list, *prev = NULL;
    if (list == NULL) {
        return new_node;
    }

    // travers though list
    while (cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }
    // Case where inserting before first node
       if (prev == NULL) {
        list->next = new_node;
        new_node->next = cur; 
    }
    
    //All other cases
    else {
        prev->next = new_node;
        new_node->next = cur;  
    }
}
