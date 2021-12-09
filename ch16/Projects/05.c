#include <stdio.h>

#define NUM_FLIGHTS (sizeof(flights) / sizeof(flights[0]))

const struct {
    int departure;
    int arrival;
} flights[] = {{8 * 60,         10 * 60 + 16},
               {9 * 60 + 43,    11 * 60 + 52},
               {11 * 60 + 19,   13 * 60 + 31},
               {12 * 60 + 47,	15 * 60     },
               {14 * 60,		15 * 60 + 8 },
               {15 * 60 + 45,	17 * 60 + 55},
               {19 * 60,	    21 * 60 + 20},
               {21 * 60 + 45,	23 * 60 + 58}};

int main(void)
{
    int hour, minute, user_time, i;
    
    printf("Enter a 24-hour time: ");
	scanf("%2d :%2d", &hour, &minute);

	user_time = hour * 60 + minute;

    for (i = 0; i < NUM_FLIGHTS; i++) {
        if (user_time <= flights[i].departure + ((flights[i].departure - flights[i+1].departure) / 2)) {
           break;
        }
    }
    printf("Closest departure time is %.2d:%2d arriving at %.2d:%.2d\n",
          flights[i].departure / 60, flights[i].departure % 60,
          flights[i].arrival / 60, flights[i].arrival % 60);
    
    return 0;
}
