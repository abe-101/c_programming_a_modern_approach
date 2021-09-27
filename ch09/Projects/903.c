#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
	char walk[10][10];
	generate_random_walk(walk);
	print_array(walk);

	return 0;
}

void generate_random_walk(char walk[10][10])
{
		
	char letter = 'A';
	int row, col, move = 0;
	bool up = false,
		 down = false,
		 left = false,
		 right = false;
	
	for (row = 0; row < 10; row++) {
		for (col = 0; col < 10; col++) {
			walk[row][col] = '.';
		}
	}
	srand((unsigned) time(NULL));

	row = 0; col = 0;

	walk[row][col] = letter++;

	while(letter <= 'Z') {
		up = down = right = left = false;
		move = 0;

		if (col + 1 < 10 && walk[row][col + 1] == '.')
            up = true;
        if (col - 1 >= 0 && walk[row][col - 1] == '.')
            down = true;
        if (row + 1 < 10 && walk[row + 1][col] == '.')
            right = true;
        if (row - 1 >= 0 && walk[row - 1][col] == '.')
            left = true;

        if (up + down + left + right == false)
            break;

		move = rand() % 4;

		switch(move) {
			case 0:
				if (up) {
					walk[row][++col] = letter++;
					break;
				}
			case 1:
				if (down) {
					walk[row][--col] = letter++;
					break;
				}
			case 2:
				if (right) {
					walk[++row][col] = letter++;
					break;
				}
			case 3:
				if (left) {
					walk[--row][col] = letter++;
					break;
				}
			default:
				break;
		}
	}
	return;
}

void print_array(char walk[10][10])
{
	int row, col;
	for (row = 0; row < 10; row++) {
		for (col = 0; col < 10; col++) {
			printf("%c ", walk[row][col]);
		}
		printf("\n");
	}
}
