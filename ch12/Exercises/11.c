#include <stdio.h>

#define SIZE sizeof(a) / sizeof(a[0])

// Prototype
int find_largest(int a[], int n);

int main(void)
{
    int i, a[10] = {1, 23, 76, 54, 23, 45, 45, 23, 96, 3};

    printf("Array contents: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", a[i]);

    printf("\nLargest: %d\n", find_largest(a, SIZE));

    return 0;
}

// Returns a pointer to the array element containing the largest value
int  find_largest(int a[], int n)
{
    int *p = a;
    int largest = *p++;

    while (p++ < a +n) {
        if (*p > largest) {
            largest = *p;
        }
    }
    return largest;
}
