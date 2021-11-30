#include <stdio.h>
#include <stdbool.h>

#define FEBRUARY 1

#define EARLIER -1
#define SAME 0
#define LATER 1

struct date {
    int month;
    int day;
    int year;
};

const int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Returns true if leap year, else flase
bool is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);;
}

// Reurns the day of year that corresponds to date d
int day_of_year(struct date d)
{
    int month, total_days = d.day;
    for (month = 0; month < d.month - 1; month++) {
        total_days += month_days[month];

        if (month == FEBRUARY && is_leap_year(d.year))
            total_days++;
    }

    return total_days;
}

int main(void)
{
    struct date d1 = {3, 12, 2012};
    struct date d2 = {8, 5, 2008};

    printf("Day of year in date %.2d/%.2d/%.4d: %d\n", d1.month, d1.day,
            d1.year, day_of_year(d1));
    printf("Day of year in date %.2d/%.2d/%.4d: %d\n", d2.month, d2.day,
            d2.year, day_of_year(d2));

    return 0;
}

