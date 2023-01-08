#include "stack.h"

void push(int data)
{
	Node *new = malloc(sizeof(Node));
	if (!new)
	{
		printf("stack Overflow\n");
		exit(1);
	}
	new -> data = data;
	new -> next = top;
	top = new;
}