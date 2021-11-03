#include <stdio.h>
#include <ctype.h>

int read_lines(char str[], int n)
{
    int ch, i = 0;

    while (!isspace(ch = getchar())) {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
