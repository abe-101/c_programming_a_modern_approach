#include <stdbool.h> 

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int *top_ptr = &contents[0];

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

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
        *top_ptr++ = i;
}

void pop(void)
{
	if (is_empty())
		stack_underflow();
	else
        return *--top_ptr;
}

