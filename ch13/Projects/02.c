/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/*  (chapter 13, page 311) */

/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   // maximum number of reminders
#define MSG_LEN 60     // max length of reminder message

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND] [MSG_LEN+3];
    char day_str[22], msg_str[MSG_LEN+1];
    int month, day, hour, minute, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day, time and reminder (mm/dd hh:mm message: ");
        scanf("%2d/ %2d", &month, &day);
        if (day == 0 || month == 0) 
            break;
        else if (day < 0 || day > 31) {
            printf("Date out of range 0-31\n");
            while (getchar() != '\n')
                ; // clears the buffer for next scanf
            continue;
        }
        scanf(" %d: %d", &hour, &minute);
        if (day < 0 || day > 31) {
            printf("Invalid date\n");
            continue;
        }
        sprintf(day_str, "%4.2d%4.2d %2.2d:%.2d ", month, day, hour, minute);
        read_line(msg_str, MSG_LEN);
        

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy (reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }
    
    printf("\nMonth Day  Time  Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
