#include <stdbool.h> 
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* prototypes */

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch;
    printf("Enter parentheses and/or braces: ");
    while((ch = getchar()) != '\n') {
        if (ch == '{' || ch == '(') {
            push(ch);
        } else if (ch == '}' && pop() != '{') {
            printf("Parentheses not nested properly.");
            break;
        } else if (ch == ')' && pop() != '(') {
            printf("Parentheses not nested properly.");
            break;
        }     
    }
    if (is_empty())
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces are not nested properly\n");

    return 0;
}
void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char ch)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = ch;
}

char pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_SUCCESS);
}

