#include "stack.h"

/**
 * isFull - checks is stack is full
 *
 * Return: 1 if full otherwise 0
 */

int isFull()
{
	if (top == MAX - 1)
		return (1);
	return (0);
}
