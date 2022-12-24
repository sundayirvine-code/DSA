#include "stack.h"

/**
 * peek - returns top of stack
 *
 * Return: Top of stack
 */


int peek()
{
	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return (stack_arr[top]);
}
