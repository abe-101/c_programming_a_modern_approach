/* A program that prints a one-month calender. The user specifies the number of days in the month and the day of the week on which the month begins */

#include <stdio.h>

int main(void)
{
	int i, day, days_in_month, days_in_week;

	printf("Enter number of days in a month: ");
	scanf("%d", &days_in_month);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &days_in_week);

	for(i = 1, day = 1; i <= days_in_month + days_in_week - 1; i++) {
		if (i < days_in_week)
			printf("   ");
		else
			printf("%3d", day++);
		if (i % 7 == 0)
		   printf("\n");
	}
	
	printf("\n");
	
	return 0;
}
