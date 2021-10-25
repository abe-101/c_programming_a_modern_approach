#include <stdio.h>

#define N 10

void find_two_largest(const int *a, int n, int *largest,
        int *second_largest);

int main(void)
{
    int b[N], *p, largest, second_largest;

    printf("Enter %d numbers: ", N);
    for (p = b; p < b + N; p++)
        scanf("%d", p);

    find_two_largest(b, N, &largest, &second_largest);

    printf("Largest: %d\n", largest);
    printf("Second largest: %d\n", second_largest);

    return 0;
}


void find_two_largest(const int *a, int n, int *largest,
        int *second_largest)
{
    const int *p = a;
    
    *largest = *second_largest = *a
        ;
    while (p++ < a + n) {
        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p  <= *largest && *p > *second_largest) {
            *second_largest = *p;
        }
    }
}
