#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    if (argc < 2) {
        printf("Usage: ./sum.c aurguments\n");
        return 1;
    }
    for (int i = 1; i < argc; i++)
        sum += atoi(argv[i]);
    printf("Total: %d\n", sum);
}

