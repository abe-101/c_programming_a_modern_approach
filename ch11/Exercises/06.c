#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest,
        int *second_largest);

int main(void)
{
    int b[N], i, largest, second_largest;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    find_two_largest(b, N, &largest, &second_largest);

    printf("Largest: %d\n", largest);
    printf("Second largest: %d\n", second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = *second_largest = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] <= *largest && a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}
