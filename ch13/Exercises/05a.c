#include <stdio.h>
#include <ctype.h>

#define LEN 100

int read_line(char str[], int n);
void print_line(char str[]);
void capitalize(char str[]);

int main(void)
{
    char msg[LEN];
    printf("Enter a message: ");
    read_line(msg, LEN);
    capitalize(msg);
    print_line(msg);
    return 0;
}
int read_line(char str[], int n)
{
    int ch, i = 0;

    do {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    } while (ch != '\n');
    str[i] = '\0';
    return i;
}

void capitalize(char str[])
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) { 
        str[i] = toupper(str[i]);
    }
}


void print_line(char str[])
{
    char *p;

    for (p = str; *p != '\0'; p++)
        printf("%c", *p);
}

