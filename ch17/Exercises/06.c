#include <stdio.h>

struct node *delete_from_list(struct node **list, int n)
{
    struct node trav  = *list;

    while (trav) {
        if (trav->value == n) {
            *list = trav->next;
            free(trav);
            break;
        }
        list = &trav->next;
        trav = trav->next
    }
    return *list;
}
