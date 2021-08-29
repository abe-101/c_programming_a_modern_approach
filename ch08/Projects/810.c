#include <stdio.h> 

int main(void) 
{
   	int i, hour, minute, user_time, d[8], a[8], dep, arr;

						/* Departure Times  Arival Time */

		d[0] = 8 * 60;		// 8:00 a.m.	
		a[0] = 10 * 60 + 16;//				10:16 a.m.
		d[1] = 9 * 60 + 43; // 9:43 a.m.
		a[1] = 11 * 60 + 52;//				11:52 a.m.
		d[2] = 11 * 60 + 19;// 11:19 a.m.
		a[2] = 13 * 60 + 31;//				1:31 p.m.
		d[3] = 12 * 60 + 47;// 12:47 p.m.
		a[3] = 15 * 60;		//				3:00 p.m.
		d[4] = 14 * 60;		// 2:00 p.m.
		a[4] = 16 * 60 + 8; //				4:08 p.m.
		d[5] = 15 * 60 + 45;// 3:45 p.m.
		a[5] = 17 * 60 + 55;//				5:55 p.m.
		d[6] = 19 * 60;		// 7:00 p.m.
		a[6] = 21 * 60 + 20;//				9:20 p.m.
		d[7] = 21 * 60 + 45;// 9:45 p.m.
		a[7] = 23 * 60 + 58;//				11:58 p.m.		

	printf("Enter a 24-hour time: ");
	scanf("%2d :%2d", &hour, &minute);

	user_time = hour * 60 + minute;

	for (i = 0; i < 8; i++) {
		if (user_time <= d[i] + (d[i + 1] - d[i]) / 2) {
			dep = d[i];
			arr = a[i];
			break;
		} else {
			dep = d[7];
			arr = a[7];
		}
	}
	return 0;
}
