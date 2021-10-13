#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

/* external vaiables */
const char segments[10] [7] = {{'_', '|', '|', '_', '|', '|', ' '},
                               {' ', '|', '|', ' ', ' ', ' ', ' '},
                               {'_', '|', ' ', '_', '|', ' ', '_'},
                               {'_', '|', '|', '_', ' ', ' ', '_'},
                               {' ', '|', '|', ' ', ' ', '|', '_'},
                               {'_', ' ', '|', '_', ' ', '|', '_'},
                               {'_', ' ', '|', '_', '|', '|', '_'},
                               {'_', '|', '|', ' ', ' ', ' ', ' '},
                               {'_', '|', '|', '_', '|', '|', '_'},
                               {'_', '|', '|', '_', ' ', '|', '_'}};

char digits[3][MAX_DIGITS * 4];

/* prototypes */

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digit_array(void);

/**********************************************************
 * Main: call
 * *******************************************************/
int main(void)
{
    int position = 0;
    char c;

    clear_digits_array();

    printf("Enter a number: ");
    while ((c = getchar()) != '\n') {
        if (isdigit(c)) {
            process_digit(c - '0', position);
            position += 4;
        }
    }
    print_digit_array();

    return 0; 
}

/**********************************************************
 * clear_digits_array: Stores blank charachter in all     *
 *                     elements of the digits array.      *
 * *******************************************************/
void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            digits[i][j] = ' ';
}

/**********************************************************
 * process_digit: Stores the seven-segment representation *
 *                digit into a specified position of in   *
 *                the digit array.                        *
 * *******************************************************/
void process_digit(int digit, int position)
{
    int i = 0;
    digits[0][position + 1] = segments[digit][i++]; //0
    digits[1][position + 2] = segments[digit][i++]; //1
    digits[2][position + 2] = segments[digit][i++]; //2
    digits[2][position + 1] = segments[digit][i++]; //3
    digits[2][position + 0] = segments[digit][i++]; //4
    digits[1][position + 0] = segments[digit][i++]; //5
    digits[1][position + 1] = segments[digit][i++]; //6
}
/**********************************************************
 * print_digit_array: Prints the rows of the digits array *
 *                    on each single line, producing the  *
 *                    seven segment display.              *
 * *******************************************************/
void print_digit_array(void)
{
    int row, col;
    for (row = 0; row < 4; row++) {
        for (col = 0; col < MAX_DIGITS * 4; col++) 
            printf("%c", digits[row][col]);
         printf("\n");
    }
    printf("\n");
}

