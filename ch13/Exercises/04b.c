#include <stdio.h>
#include <ctype.h>
int read_line(char str[], int n);
void print_line(char str[]);

int main(void)
{
    char msg[20];
    printf("Enter a message: ");
    read_line(msg, 20);
    print_line(msg);
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while (!isspace(ch = getchar())) {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

void print_line(char str[])
{
    char *p;

    for (p = str; *p != '\0'; p++)
        printf("%c", *p);
}
