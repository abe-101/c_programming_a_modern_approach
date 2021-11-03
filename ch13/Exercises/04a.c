#include <stdio.h>
#include <ctype.h>

int read_lines(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (i == 0 && isspace(ch)); //do nothing

        else if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
