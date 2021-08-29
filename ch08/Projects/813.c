#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, initial, last_name[20];
	int i, last_name_length = 0;

    printf("Enter a first and last name: ");
    while ((ch = getchar()) == ' '); //Skip initial white space until first char
    initial = ch;
    while ((ch = getchar()) != ' '); //Skip chars after first char until whitespace

    for (i = 0; (ch = getchar()) != '\n' && i < 20; i++) {
        if (ch != ' ') {
            last_name[i] = ch;
			last_name_length++;
		}
    }
	for (i = 0; i < last_name_length; i++)
		printf("%c", last_name[i]);
    printf(", %c.\n", initial);

    return 0;
}

