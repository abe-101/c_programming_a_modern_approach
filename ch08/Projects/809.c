#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char letter = 'A', grid[10][10] = {0};
	int row = 0, col = 0,
		up = 0,
		down = 0,
		left = 0,
		right = 0,
		move = 0;

	srand((unsigned) time(NULL));

	grid[row][col] = letter++;

	while (letter <= 'Z') {
		 up = down = left = right = move = 0;

        if (col + 1 < 10 && grid[row][col + 1] == 0)
            up = 1;
        if (col - 1 >= 0 && grid[row][col - 1] == 0)
            down = 1;
        if (row + 1 < 10 && grid[row + 1][col] == 0)
            right = 1;
        if (row - 1 >= 0 && grid[row - 1][col] == 0)
            left = 1;

        if (up + down + left + right == 0)
            break;

		move = rand() % 4;

		switch(move){
			case 0:
				if (up) {
					grid[row][++col] = letter++;
					break;
				}
			case 1:
				if (down) {
					grid[row][--col] = letter++;
					break;
				}
			case 2:
				if (right) { 
					grid[++row][col] = letter++;
					break;
				}
			case 3:
				if (left) {
					grid[--row][col] = letter++;
					break;
				}
			default:
				break;
		}
	}

	for (row = 0; row < 10; row++){
		for (col = 0; col < 10; col++) {
			if (grid[row][col] == 0)
				grid[row][col] = '.';
			printf("%c ", grid[row][col]);
		}
		printf("\n");
	}
	return 0;
}

