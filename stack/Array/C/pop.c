#include "stack.h"

/**
 * pop - removes element from stack
 *
 * Return: Value removed
 */

int pop()
{
	int value;
	if (isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	value = stack_arr[top];
	top--;
	return (value);
}
