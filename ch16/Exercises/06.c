#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
    long total_seconds;
    printf("Enter seconds elapsed since midnight: ");
    scanf("%ld", &total_seconds);
    struct time time1 = split_time(total_seconds);
    printf("Hour: %d, Minute: %d, Second: %d\n", time1.hour, time1.minutes, time1.seconds);

    return 0;
}

struct time split_time(long total_seconds)
{
    struct time time1;
    
    time1.hour = total_seconds / 3600;
    total_seconds -= time1.hour * 3600;
    time1.minutes = total_seconds / 60;
    total_seconds -= time1.minutes * 60;
    time1.seconds = total_seconds;

    return time1;
}
