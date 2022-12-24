#include "stack.h"

void print()
{
	Node *ptr = top;
	if (isEmpty()){
		printf("Stack Underflow\n");
		exit(1);
	}
	while(ptr)
	{
		printf("%d ", ptr -> data);
		ptr = ptr -> next;
	}
	printf("\n");
}