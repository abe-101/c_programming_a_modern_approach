#include <stdio.h>
#include <stdlib.h>

void *my_malloc(int n)
{
    void *p;

    if((p = malloc(n)) == NULL) {
        printf("Erroe, malloc failed.\n");
        exit(EXIT_FAILURE);
    }

    return p;
}

int main(void)
{
    char *p = my_malloc(10);
    
    return 0;
}
      
