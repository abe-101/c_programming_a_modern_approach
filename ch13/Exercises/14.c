/* Chapter 13 Exercise 14.c
 * What does the following program print?
 *
 * 
 * By @abe_SlimHacker
 *
 * Answer: Grinch
 */


#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}
