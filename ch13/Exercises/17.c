#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool test_extension(const char *file_name,
                    const char *extension);

int main(void)
{
    printf("%s\n", test_extension("memo.txt", "txt") ? "True" : "False");

    return 0;
}

bool test_extension(const char *file_name,
                    const char *extension)
{
    while (*file_name++ != '.');

    if (strlen(file_name) != strlen(extension))
        return false;

    while (*file_name)
        if (!toupper(*file_name++) == toupper(*extension++))
            return false;
    return true;  
}
