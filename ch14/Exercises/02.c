#include <stdio.h>

#define NELEMS(a) ((sizeof(a))/(sizeof(a[0])))

int main(void)
{
    int arr[10];

    printf("The number of elements in arr are: %d\n", NELEMS(arr));
}
