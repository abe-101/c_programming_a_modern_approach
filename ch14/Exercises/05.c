#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void)
{
    int i;
    char s1[5], s2[5];

    strcpy(s1, "abcd");
    i = 0;
    putchar(TOUPPER(s1[++i]));
    printf("\n");
    
    strcpy(s2, "0123");
    i = 0;
    putchar(TOUPPER(s2[++i]));
    printf("\n");

}
