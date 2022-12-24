#include "stack.h"

/**
 * main - driver code
 *
 * Return: Always 0
 */

int top = -1;
int stack_arr[MAX];

int main()
{
	int choice, data;

	/*test infix to posfix expression*/
	printf("Enter Infix Expression: ");
	gets(infix);
	in_to_post();
	print_postfix();

				
	while(1)
	{
		printf("Choices:\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. peek\n");
		printf("4. print\n");
		printf("5. Quit\n");
		printf("Enter Choice: ");

		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter Element: ");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				data = pop();
				printf("Deleted %d\n", data);
				break;
			case 3:
				printf("Top elemet: %d\n", peek());
				break;
			case 4:
				print();
				break;
			case 5:
				exit(0);

			default:
				printf("wrong choice \n");
		}
	}
	return (0);
}
