#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int main(void)
{
    char c, message[N], *pa = message, *pb = message;
    bool flag = 0;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
    {
        if(isalpha(c))
            *pa++ = toupper(c);
    }
    pa--;
    while (pa >= pb)
    {
        if (*pa-- != *pb++)
        {
            flag = 1;
        }
    }
    if (flag)
       printf("Not a palindrome\n");
    else
        printf("Palindrome\n");
    return 0;
}

