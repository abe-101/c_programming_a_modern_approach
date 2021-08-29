#include <stdio.h>

int main(void)
{
	int row, col;
	double sum = 0.0, temperature_readings[30] [24] = {0};
	
	for (row = 0; row < 30; row++)
		for (col = 0; col < 24; col++)
			sum =+ temperature_readings[row] [col];

	printf("The average temperture for the month is %d\n", sum / (30 * 24)

	return 0;
}
