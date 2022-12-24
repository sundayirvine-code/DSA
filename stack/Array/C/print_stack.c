#include "stack.h"

/**
 * print - print stack elements from top
 *
 * Return: Nothing
 */
void print()
{
	int i;

	if (isEmpty())
	{
		printf("Stack Underflow\n");
		return;
	}
	for (i = 0; i <= top; i++)
	{
		printf("%d ", stack_arr[i]);
	}
	printf("\n");

}