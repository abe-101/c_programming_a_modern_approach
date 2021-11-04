/* Chapter 13 Exercise 11.c:  
 *
 * By @abe_SlimHacker
 *
 * Answer
 */
#include <stdio.h>

int strcmp(char *s, char *t);

int main(void)
{
    char *str1 = "computer";
    char *str2 = "science";
    printf("%d", strcmp(str1, str2));
    return 0;
}
int strcmp(char *s, char *t)
{

    while( ( *s != '\0' && *t != '\0' ) && *s == *t )
    {
        s++;
        t++;
    }

    if(*s == *t)
    {
        return 0; // strings are identical
    }

    else
    {
        return *s - *t;
    }
}

