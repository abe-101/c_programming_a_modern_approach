#include <stdio.h>

int main(void)
{
	int i, shift, length = 0;
	char msg[80];

	printf("Enter message to be encrypted: ");
	for (i = 0; (msg[i] = getchar()) != '\n' && i < 80; i++)
		length++;

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	printf("Encryped message: ");

	for (i = 0; i < length; i++) {
		if (msg[i] >= 'A' && msg[i] <= 'Z') 
			msg[i] = ((msg[i] - 'A') + shift) % 26 + 'A';
		else if ( msg[i] >= 'a' && msg[i] <= 'z')
			msg[i] = ((msg[i] - 'a') + shift) % 26 + 'a';
		putchar (msg[i]);
	}

	//for (i = 0; i < length; i++)
	//	printf("%c", msg[i]);
	printf("\n");

	return 0;
}

