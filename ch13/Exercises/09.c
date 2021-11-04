/* 
 * Chapter 13 Exercise 09.c:  
 * What will be the value of the string s1 after the following
 * statements have been excuted?
 *
 *
 * By @abe_SlimHacker
 *
 * Answer
 * computers
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[50], s2[50];
    strcpy(s1, "computer");
    strcpy(s2, "science");
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);
    else
        strcat(s2, s1);
    s1[strlen(s1)-6] = '\0';

    printf("%s\n", s1);
}
