#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hour, min;
	char ch;

	printf("Enter a 12-hour time: ");
	scanf("%2d :%2d %c", &hour, &min, &ch);

	printf("Equivalent 24-hour time: %2d:%2d\n", (toupper(ch) == 'P' ? 12 + hour : hour), min);

	return 0;
}
