#include <stdio.h>

#define ROW 2
#define COL 5

int sum_two_dimensional_array(const int *a, int n);

int main(void)
{
    int array[ROW][COL] = {1, 2, 3, 4, 5,
                           5, 4, 3, 2, 1};
    printf("Array sum: %d\n", sum_two_dimensional_array(array[0], ROW * COL));

    return 0;
}


int sum_two_dimensional_array(const int *a, int n)
{
    const int *p;
    int sum = 0;
    for (p = a; p < a + n; p++)
        sum += *p;
    return sum;
}
