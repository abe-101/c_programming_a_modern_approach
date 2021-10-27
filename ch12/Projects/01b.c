#include <stdio.h>

#define N 100

int main(void)
{
    char c, message[N], *pc = &message[0];

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && pc < message + N)
    {
        *pc++ = c;
    }
    pc--;
    printf("Reversal is: ");
    while (pc >= message)
    {
        putchar( *pc--);
    }
    printf("\n");
    return 0;
}
