#include "stack.h"

// initialize extern variable
Node *top = NULL;

int main()
{
	int choice, data, p;

	while(1)
	{
		printf("Choices:\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print\n");
		printf("4. Peek\n");
		printf("5. exit\n");

		scanf("%d", &choice);

		switch(choice){
			case 1:
				printf("Enter element: ");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				printf("popped: %d\n", pop());
				break;
			case 3:
				printf("stack: ");
				print();
				break;
			case 4:
				printf("Top element: %d\n", peek());
				break;
			case 5:
				exit(1);
			default:
				printf("bad choice\n");
				break;
		}
	}

	return (0);
}
