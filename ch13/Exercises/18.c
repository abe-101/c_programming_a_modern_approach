#include <stdio.h>

void remove_filename(char *url);

int main(void)
{
    char url[] = "http://www.knking.com/index.html";
    remove_filename(url);
    printf("%s\n", url);

    return 0;
}

void remove_filename(char *url)
{
    char *p = url;
    int slash_count = 0;
    while (*url++)
    {
        if (*url == '/')
            p = url;
    }
    *p = '\0';
}

