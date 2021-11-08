#include <stdio.h>
#include <string.h>

#define URL 100

void build_index_url(const char *domain, char *index_url);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./13.c domain_url\n");
        return 1;
    }
    
    char index_url[URL];
    const char *domain = argv[1];
    build_index_url(domain, index_url);
    printf("%s\n", index_url);
}


void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

