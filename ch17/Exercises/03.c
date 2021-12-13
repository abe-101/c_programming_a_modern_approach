#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value)
{
    int *p;

    if ((p = malloc(n *sizeof(int))) == NULL)
        return NULL;

    for (int i = 0; i < n; i++)
        p[i] = initial_value;
    
    return p;
}

int main(void)
{
    int *p;
    p = create_array(10, 3);

    for (int i = 0; i < 10; i++)
        printf("%d", p[i]);
    printf("\n");
}
