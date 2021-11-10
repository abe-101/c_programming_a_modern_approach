#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NAME_LEN 90

int read_lines(char str[], int n);
void reverse_name(char *name);

int main(void)
{
	char name[NAME_LEN];

    printf("Enter a first and last name: ");
    read_lines(name, NAME_LEN);
    reverse_name(name);
    printf("%s\n", name); 

    return 0;
}

int read_lines(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

void reverse_name(char *name)
{
    char last_name[NAME_LEN], initial[] = {',',' ',' ', '\0'}, *p, *q;

    p = name;
    q = last_name;
    while (*p == ' ')
       p++;
    initial[2] = toupper(*p++);
    while (*p != ' ')
        p++;
    while (*p++ != '\0') {
        if (*p != ' ') {
            *q = *p;
            q++;
        }
    }
    last_name[0] = toupper(last_name[0]);
    name[0] = *q = '\0';
    strcat(name, (strcat(last_name, initial)));
}
