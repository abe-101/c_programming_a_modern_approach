#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *duplicate(char *str);

int main(void)
{
    char *ps, str[] = "this is a string";
    ps = duplicate(str);
    printf("%s\n", ps);

    return 0;
}


void *duplicate(char *str)
{
    char *p;
    
    if ((p = malloc(strlen(str) + 1)) == NULL)
        return NULL;

    strcpy(p, str);
    return p;
}
