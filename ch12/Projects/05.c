#include <stdio.h>

int main(void)
{
	char ch, *pa, *pb, sentence[200] = {0}, term = '?';
	int i, j, sentence_length = 0, word_length = 0;

	printf("Ente a sentence: ");
	// Populate sentence array until terminator char found
    for (pa = sentence; (ch = getchar()) != '\n' && pa < sentence + 200;pa++) {
	//for (i = 0; (ch = getchar()) != '\n' && i < 200; i++) {
		if(ch == '.' || ch == '!' || ch == '?') {
			term = ch;
			break;
		} else {
			*pa = ch;
		//	sentence_length++;
		}
	}

	printf("Reversal of sentence: ");
	// Iterate backwards through sentence
	for (pa--; pa >= sentence; pa--) {
		if (*pa == ' ' || pa == sentence) {
			if(pa == sentence){
				pa--;
			} 
            for (pb = pa +1; pb <= pa + word_length + 1; pb++)
				printf("%c", *pb);
			word_length = 0;
		} else
			word_length++;
	}
	printf("%c\n", term);

	return 0;
}
