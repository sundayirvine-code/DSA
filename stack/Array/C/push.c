#include "stack.h"

/**
 * push - adds element to stack
 * @data: value to add
 *
 * Return: Nothing
 */


void push(int data)
{
	if (isFull()){
		printf("Stack Overflow\n");
		return;
	}
	top++;
	stack_arr[top] = data;
}
