#include "stack.h"

void print_postfix()
{
    int i = 0;

    printf("Postfix Expression: ");
    while(posfix[i])
    {
        printf("%c", posfix[i++]);
    }
    printf("\n");
}