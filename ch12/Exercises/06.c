#include <stdio.h>

#define N 5

int sum_array(const int a[], int n);

int main(void)
{
    int a[N];
    int *p;
    printf("Enter %d digit array: ", N);
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }
    printf("The total of the array: %d\n", sum_array(a, N));
    return 0;
}

int sum_array(const int a[], int n)
{
    int sum = 0;
    const int *p;
    for(p = a; p < a + n; p++)
        sum += *p;
    return sum;
}
