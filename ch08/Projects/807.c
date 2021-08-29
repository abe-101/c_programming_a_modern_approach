#include <stdio.h>

int main(void)
{
	int row, col, arr[5] [5], total;

	for (row = 0; row < 5; row++) {
		printf("Enter row %d: ", row + 1);
		scanf("%d %d %d %d %d", &arr[row][0], &arr[row][1], &arr[row][2], &arr[row][3], &arr[row][4]);
	}

	printf("Row totals: ");
	for (row = 0; row < 5; row++) {
		total = 0;
		for (col = 0; col < 5; col++)
			total += arr[row][col];
		printf("%d ", total);
	}
	
	printf("\nColumn totals: ");
	for (col = 0; col < 5; col++) {
		total = 0;
		for (row = 0; row < 5; row++)
			total += arr[row][col];
		printf("%d ", total);
	}
	printf("\n");

	return 0;
}
