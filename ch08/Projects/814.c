#include <stdio.h>

int main(void)
{
	char ch, sentence[200] = {0}, term = '?';
	int i, j, sentence_length = 0, word_length = 0;

	printf("Ente a sentence: ");
	// Populate sentence array until terminator char found
	for (i = 0; (ch = getchar()) != '\n' && i < 200; i++) {
		if(ch == '.' || ch == '!' || ch == '?') {
			term = ch;
			break;
		} else {
			sentence[i] = ch;
			sentence_length++;
		}
	}

	printf("Reversal of sentence: ");
	// Iterate backwards through sentence
	for (i = sentence_length -1; i >= 0; i--) {
		if (sentence[i] == ' ' || i == 0) {
			if(i == 0){
				i--;
			}
			for (j = i + 1; j <= i + word_length + 1; j++)
				printf("%c", sentence[j]);
			word_length = 0;
		} else
			word_length++;
	}
	printf("%c\n", term);

	return 0;
}
