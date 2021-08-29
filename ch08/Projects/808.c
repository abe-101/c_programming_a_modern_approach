#include <stdio.h>

int main(void)
{
	int row, col, high_score, low_score, arr[5] [5], student_total;
	float avg_score;

	printf("Enter 5 quiz grades for\n");
	for (row = 0; row < 5; row++) {
		printf("Student %d: ", row + 1);
		scanf("%d %d %d %d %d", &arr[row][0], &arr[row][1], &arr[row][2], &arr[row][3], &arr[row][4]);
	}

	for (row = 0; row < 5; row++) {
		student_total = 0;
		for (col = 0; col < 5; col++)
			student_total += arr[row][col];
		printf("Total score for stundent %d is %d. ", row + 1, student_total);
		printf("Average score is: %d\n", student_total / 5);
	}
	
  /* Calculate quiz stats */
    for (col = 0; col < 5; col++) {
        avg_score = 0.0f;
        high_score = 0;
        low_score = arr[col][0];

        printf("\n*Stats for Quiz %d*\n", col + 1);
        for(row = 0; row < 5; row++) {
            avg_score += arr[row][col];
            high_score = arr[row][col] > high_score ? arr[row][col] : high_score;
            low_score = arr[row][col] < low_score ? arr[row][col] : low_score;
        }
        printf("Average score: %2.1f\n", avg_score / 5);
        printf("Highest score: %2d\n", high_score);
        printf("Lowest score:  %2d\n", low_score);
	}

	printf("\n");

	return 0;
}
