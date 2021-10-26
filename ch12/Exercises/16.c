#include <stdio.h>
#include <stdbool.h>

#define DAYS 7
#define HOURS 24

int find_largest(int a[], int n);

int main(void)
{
    int temperatures[DAYS][HOURS] = {[1][15] = 31};
    for (int i = 0; i < DAYS; i++)
        printf("\nLargest: %d\n", find_largest(temperatures[i], HOURS));

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
