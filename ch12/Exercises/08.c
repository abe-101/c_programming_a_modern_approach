#include <stdio.h>

#define N 10

void store_zeros(int a[], int n);

int main(void)
{
    int a[N] = {3, 4, 5, 6, 8, 3, 2, 5, 6, 7};
    int *p;
    for (p = a; p < a + N; p++)
        printf("%d ", *p);
    store_zeros(a, N);
    printf("\n");
    for (p = a; p < a + N; p++)
        printf("%d ", *p);
    printf("\n");

    return 0;

}

void store_zeros(int a[], int n)
{
    int *p;
    for (p = a; p < a + n; p++)
        *p = 0;
}
