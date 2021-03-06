#include <stdbool.h>

#ifndef STACK_H
#define STACK_H

// Prototype

/************************************************************
 * make_empty: Clears the stack.                            *
 ************************************************************/
void make_empty(void);

/************************************************************
 * is_emtpy: Tests if stack is empty.                       * 
 ************************************************************/
bool is_empty(void);

/************************************************************
 * is_full: Test if stack is full.                          *
 ************************************************************/
bool is_full(void);

/************************************************************
 * push: Pushs item into top of stack.                      *
 ************************************************************/
void push(char i);

/************************************************************
 * pop: Remove item from top of stack.                      *
 ************************************************************/
char pop(void);

/************************************************************
 * stack_overflow: This function is called when pushing a   *
 *                 full stack.                              * 
 ************************************************************/
void stack_overflow(void);

/************************************************************
 * stack_underflow: This function is called when popping    *
 *                  an empty stack.                         *
 ************************************************************/
void stack_underflow(void);

#endif
