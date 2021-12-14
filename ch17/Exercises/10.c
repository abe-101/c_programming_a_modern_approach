#include <stdio.h>


void print(struct part p)
{

    printf("Part Number: %d\m", p->number);
    printf("Part Name: $s\n", p->name);
    printf("Quantity on Hand: %d\n", p->on_hand);
}

