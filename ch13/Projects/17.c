#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MSG_LEN 90

int read_lines(char str[], int n);
void reverse(char *message);
bool is_palindrome(const char *message);

int main(void)
{
    char message[MSG_LEN];
    printf("Enter a message: ");
    read_lines(message, MSG_LEN);
    reverse(message);
    printf("Reversal is: %s\n", message);
    if (is_palindrome(message))
        printf("Message is a palindrome\n");
    else
        printf("Message is not a palindrome\n");
   
   return 0;
}

void reverse(char *message)
{
    char temp, *p1 = message, *p2 = &message[strlen(message) - 1];
    for (; p1 < p2; *p1++, *p2--)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

bool is_palindrome(const char *message)
{
    char const *p1 = message, *p2 = &message[strlen(message) - 1];
    for (; p1 < p2; *p1++, *p2--)
    {
        if (*p1 != *p2)
            return false;
    }
    return true;
}

int read_lines(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

