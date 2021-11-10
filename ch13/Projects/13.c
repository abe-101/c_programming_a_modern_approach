#include <stdio.h>
#include <ctype.h>

#define MSG_LEN 30

int read_lines(char str[], int n);
void encrypt(char *message, int shift);

int main(void)
{
	int shift;
    char msg[MSG_LEN];

	printf("Enter message to be encrypted: ");
    read_lines(msg, MSG_LEN);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    encrypt(msg, shift);
    puts(msg);

    return 0;
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

void encrypt(char *message, int shift)
{
    int i;

    for (i = 0; message[i] != '\0'; i++) {
       if (message[i] >= 'A' && message[i] <= 'Z') 
           message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
       else if ( message[i] >= 'a' && message[i] <= 'z')
           message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
    }
}
