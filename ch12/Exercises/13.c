#include <stdio.h>

#define N 40

int main(void)
{
    double ident[N][N];
    double *p = &ident[0][0];
    int i = 0;
    while (i < (N * N)) {
        if ((i % (N + 1)) == 0) {
            *p++ = 1;
            i++;
        } else {
            *p++ = 0;
            i++;
        }
    }
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++)
            printf("%.0f ", ident[row][col]);
        printf("\n");
    }
    return 0;
}
