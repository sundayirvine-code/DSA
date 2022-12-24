#include "stack.h"

void in_to_post()
{
    int i, j = 0;
    char next;
    char symbol;

    /*Scan the expression*/
    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];
        /*symbol should'nt be white space*/
        if(!space(symbol))
        {
            switch (symbol)
            {
            case '(':
                push(symbol);
                break;
            
            case ')':
                while ((next = pop()) != '(')
                {
                    posfix[j++] = next;
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while(!isEmpty() && precedence(stack_arr[top]) >= precedence(symbol))
                {
                    posfix[j++] = pop();
                }
                push(symbol);
                break;
            default:
                /*symol is an operand*/
                posfix[j++] = symbol;
                break;
            }
        }
    }
    /*if stack is not empty*/
    while(!isEmpty())
    {
        posfix[j++] = pop();
    }
    posfix[j] = '\0';
}

