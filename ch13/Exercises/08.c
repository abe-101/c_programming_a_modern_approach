/* 
 * Chapter 13 Exercise 08.c: What will be the value of the 
 * string str after the following statements have been executed?
 * strcpy(str, "tire-bouchon");
 * strcpy(&str[4], "d-or-wi");
 * strcat(str, "red?");
 * 
 * By @abe_SlimHacker
 *
 * answer
 * tired-or-wired? */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    strcpy(str, "tire-bouchon");
    strcpy(&str[4], "d-or-wi");
    strcat(str, "red?");
    printf("%s\n", str);
}
