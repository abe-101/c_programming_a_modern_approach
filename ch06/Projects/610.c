#include <stdio.h>

int main(void)
{
	int year, earliest_year, month, earliest_month, day, earliest_day;

	printf("This Program computes the earliesst date entered by the user\n");
	printf("(Enter 0/0/0 to complete)\n");

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d", &earliest_month, &earliest_day, &earliest_year);

	
	while (1) {

		printf("Enter a date (mm/dd/yy): ");
		scanf("%d /%d /%d", &month, &day, &year);

		if (day == 0 && month == 0 && year == 0)
			break;

		if (year < earliest_year || (earliest_year == year && month < earliest_month) || (earliest_year == year && earliest_month == month && day < earliest_day)) {

			earliest_year = year;
			earliest_month = month;
			earliest_day = day;
		}

	}


	printf("%d/%d/%.2d is the earliest date\n", earliest_month, earliest_day, earliest_year);

	return 0;
}

	
