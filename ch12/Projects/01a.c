#include <stdio.h>

#define N 100

int main(void)
{
    char c, message[N];
    int i = 0;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && i < N) 
    {
        message[i++] = c;
    }
    i--;
    printf("Reversal is: ");
    while (i >= 0)
    {
        putchar(message[i--]);
    }
    printf("\n");
    return 0;
}
