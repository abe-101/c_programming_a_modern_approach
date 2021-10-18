/* maxmin.c (chapter 11, page 250) */
/* finds the largest and smallest alemments in an array */

#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void)
{
    int i, a[N];
    
    
    printf("This Program finds the largest number\n");
    printf("Enter %d number: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("The largest number is: %d\n", *find_largest(a, i));

    return 0;
}

int *find_largest(int a[], int n)
{
    int i, max = 0;

    for (i = 0; i < n; i++) {
        if (a[i] > a[max])
            max = i;
    }
    return &a[max];
}
