#include <stdio.h> 

int main(void) 
{
   	int hour, minute, user_time, d1, d2, d3, d4, d5, d6, d7, d8;

						/* Departure Times  Arival Time */

		d1 = 8 * 60,		// 8:00 a.m.	10:16 a.m.
		d2 = 9 * 60 + 43,	// 9:43 a.m.	11:52 a.m.
		d3 = 11 * 60 + 19,	// 11:19 a.m.	1:31 p.m.
		d4 = 12 * 60 + 47,	// 12:47 p.m.	3:00 p.m.
		d5 = 14 * 60,		// 2:00 p.m.	4:08 p.m.
		d6 = 15 * 60 + 45,	// 3:45 p.m.	5:55 p.m.
		d7 = 19 * 60,		// 7:00 p.m.	9:20 p.m.
		d8 = 21 * 60 + 45,	// 9:45 p.m.	11:58 p.m.		

	printf("Enter a 24-hour time: ");
	scanf("%2d :%2d", &hour, &minute);

	user_time = hour * 60 + minute;

	printf("Closest departure time is ");

	if (user_time <= d1 + ((d2 - d1) / 2))
		printf("8:00 a.m., arriving at 10:16 a.m.\n");
	else if (user_time < d2 + ((d3 - d2) / 2))
		printf("9:43 a.m., arriving at 11:52 a.m.\n");
	else if (user_time < d3 + ((d4 - d3) / 2))
		printf("11:19 a.m., arriving at 1:31 p.m.\n");
	else if (user_time < d4 + ((d5 - d4) / 2))
		printf("12:47 p.m., arriving at 3:00 p.m.\n");
	else if (user_time < d5 + ((d6 - d5) / 2))
		printf("2:00 p.m., arriving at 4:08 p.m.\n");
	else if (user_time < d6 + ((d7 - d6) / 2))
		printf("3:45 p.m., arriving at 5:55 p.m.\n");
	else if (user_time < d7 + ((d8 - d7) / 2))
		printf("7:00 p.m., arriving at 9:20 p.m.\n");
	else
		printf("9:45 p.m., arriving at 11:58 p.m.\n");


	return 0;
}
