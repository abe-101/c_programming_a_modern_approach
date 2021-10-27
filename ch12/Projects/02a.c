#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int main(void)
{
    char c, message[N];
    int i = 0, j = 0;
    bool flag = 0;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
    {
        if(isalpha(c))
            message[i++] = toupper(c);
    }
    i--;
    while (i >= j)
    {
        if (message[i--] != message[j++])
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

