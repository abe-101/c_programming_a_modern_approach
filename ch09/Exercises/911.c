#include <stdio.h>

#define SIZE sizeof(grades) / sizeof(grades[0])

#define N 10

float compute_GPA(char grades[], int n);

int main(void)
{
	int i;
	char grades[N] = {'A', 'B', 'C', 'D', 'b', 'A', 'C', 'D', 'A', 'A'};

	printf("Average of all grades: %.2f\n", compute_GPA(grades, SIZE));

	return 0;
}

float compute_GPA(char grades[], int n)
{
    int i;
    float average = 0.0f;
    for (i = 0; i < n; i++) {
        switch (grades[i]) {
            case 'A':   average += 4.0f;
                        break;
            case 'B':   average += 3.0f;
                        break;
            case 'C':   average += 2.0f;
                        break;
            case 'D':   average += 1.0f;
                        break;
        }
    }

    return average / n;
}

