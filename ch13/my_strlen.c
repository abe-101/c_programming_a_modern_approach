#include <stdio.h>

size_t my_strlen(const char *s)
{
    size_t n = 0;

    for (; *s; s++)
        n++;
    return n;
}
