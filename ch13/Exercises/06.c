#include <stdio.h>
#include <ctype.h>

#define LEN 100

int read_line(char str[], int n);
void print_line(char str[]);
void censor(char s[]);

int main(void)
{
    char msg[LEN];
    printf("Enter a message: ");
    read_line(msg, LEN);
    censor(msg);
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
void censor(char s[])
{
  int i;

  for (i = 0; s[i] != '\0'; i++)
    if (s[i] == 'f' && s[i+1] == 'o' && s[i+2] =='o')
      s[i] = s[i+1] = s[i+2] = 'x';
}

void print_line(char str[])
{
    char *p;

    for (p = str; *p != '\0'; p++)
        printf("%c", *p);
}

