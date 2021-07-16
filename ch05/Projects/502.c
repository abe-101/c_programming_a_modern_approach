#include <stdio.h>

int main(void)
{
	int hour, minute;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	printf("Equivalant 12-hour time: ");

	if (hour == 24 || hour == 0)
		printf("12:%.2d AM\n", minute);
	else if (hour < 12)
		printf("%d:%.2d AM\n", hour, minute);
	else if (hour == 12)
		printf("%.2d:%.2d PM\n", hour, minute);
	else if (hour < 24)
		printf("%.2d:%.2d PM\n", (hour - 12), minute);
	else
		printf("Invalid entry\n");

	return 0;
}

