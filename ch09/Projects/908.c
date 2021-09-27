#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
	srand((unsigned) time(NULL));
	char play;
	int wins = 0, losses = 0;

	do
	{
		printf("\n");
		if (play_game()) {
			wins++;
			printf("You win!\n");
		} else {
			losses++;
			printf("You lose!\n");
		}

		printf("Play again?(y/n): ");
		scanf(" %c", &play);
	} while (toupper(play) == 'Y');

	printf("Wins: %d Losses: %d\n", wins, losses);

	return 0;
}

int roll_dice(void)
{
	int dice1, dice2;

	dice1 = rand() & 6 + 1;
	dice2 = rand() & 6 + 1;

	return dice1 + dice2;
}
bool play_game(void)
{
	int rolls = roll_dice();
	int point = rolls;
	printf("You rolled: %d\n", rolls);
	if (rolls == 7 || rolls == 11)
		return true;
	else if (rolls <= 3 || rolls == 12)
		return false;
	else 
		printf("Your point is: %d\n", point);

	while (true) { 
		rolls = roll_dice();
		printf("You rolled: %d\n", rolls);	
		if (rolls == point)
			return true;
		else if (rolls == 7)
			return false;
	}
}


