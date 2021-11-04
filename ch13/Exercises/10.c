/* Chapter 13 Exercise 10.c:  
 *
 * By @abe_SlimHacker
 *
 * Answer
 */
#include <stdio.h>
#include <string.h>

char *duplicate(const char *p)
{
    static char *q[strlen(p)];

    strcpy(q, p);
    return q;
}
