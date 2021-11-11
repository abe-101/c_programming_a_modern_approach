#include <stdio.h>

int main(void)
{
    char *month[] = {"January", "Feburary", "March", "april", "May",
                   "June", "july", "Augest", "Septempber",
                   "October", "November", "Decempber"};
    int m, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &day, &year);
    printf("You Entered the date %s %2d, %d\n", month[m -1], day, year);
    
    return 0;
}
