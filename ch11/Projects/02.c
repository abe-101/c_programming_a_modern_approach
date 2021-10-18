#include <stdio.h> 

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
int main(void) 
{
   	int hour, minute, desired_time, departure_time, arrival_time;

	printf("Enter a 24-hour time: ");
	scanf("%2d :%2d", &hour, &minute);

	desired_time = hour * 60 + minute;
    find_closest_flight(desired_time, &departure_time, &arrival_time);

	printf("Closest departure time is %d:%02d, arriving at %d:%02d\n",
            departure_time / 60, departure_time % 60,
            arrival_time / 60, arrival_time % 60);

	return 0;
}
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{

    int d1, d2, d3, d4, d5, d6, d7, d8;

						/* Departure Times  Arival Time */

	d1 = 8 * 60;		// 8:00 a.m.	10:16 a.m.
	d2 = 9 * 60 + 43;	// 9:43 a.m.	11:52 a.m.
	d3 = 11 * 60 + 19;	// 11:19 a.m.	1:31 p.m.
	d4 = 12 * 60 + 47;	// 12:47 p.m.	3:00 p.m.
	d5 = 14 * 60;		// 2:00 p.m.	4:08 p.m.
	d6 = 15 * 60 + 45;	// 3:45 p.m.	5:55 p.m.
	d7 = 19 * 60;		// 7:00 p.m.	9:20 p.m.
	d8 = 21 * 60 + 45;	// 9:45 p.m.	11:58 p.m.		
    
    if (desired_time <= d1 + ((d2 - d1) / 2)) {
        *departure_time = d1; *arrival_time = 616;}
	else if (desired_time < d2 + ((d3 - d2) / 2)){
        *departure_time = d2; *arrival_time = 712;}
	else if (desired_time < d3 + ((d4 - d3) / 2)){
        *departure_time = d3; *arrival_time = 811;}
	else if (desired_time < d4 + ((d5 - d4) / 2)){
        *departure_time = d4; *arrival_time = 900;}
	else if (desired_time < d5 + ((d6 - d5) / 2)){
        *departure_time = d5; *arrival_time = 968;}
	else if (desired_time < d6 + ((d7 - d6) / 2)){
        *departure_time = d6; *arrival_time = 1075;}
	else if (desired_time < d7 + ((d8 - d7) / 2)){
        *departure_time = d7; *arrival_time = 1280;}
	else{
        *departure_time = d8; *arrival_time = 1438;}
}
