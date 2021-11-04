#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);
void get_extension(const char *file_name, char *extension);

int main(void)
{
    char file_name[20], extension[20];
    printf("Enter a file name: ");
    read_line(file_name, 20);
    get_extension(file_name, extension);
    printf("%s", extension);
    
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((str[i++] = getchar()) != '\n' && ch != EOF)
        ;
    str[i] = '\0';
    return i;
}

void get_extension(const char *file_name, char *extension)
{
    const char * p = file_name;
    while (*p != '.' && p < file_name + strlen((file_name)))
        p++;
    strcpy(extension, p);
}
