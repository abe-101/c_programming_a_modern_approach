#include <stdio.h>

size_t my_strlen(const char *s)
{
    const char *p = s;
    while (*s)
        s++;
    return s - p;
}
