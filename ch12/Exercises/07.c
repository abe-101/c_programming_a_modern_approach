#include <stdio.h>
#include <stdbool.h>

#define N 5

bool search(const int a[], int n, int key);

int main(void)
{
    int a[N], *p, key;
    printf("Enter %d digit array: ", N);
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }
    printf("Enter search key: ");
    scanf("%d", &key);
    if (search(a, N, key))
        printf("Key found in array.\n");
    else
        printf("Key not found in array.\n");

    return 0;
}

bool search(const int a[], int n, int key)
{
    const int *p;
    for(p = a; p < a + n; p++) {
        if (*p == key)
            return true;
    }
    return false;
}
