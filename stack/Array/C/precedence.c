#include "stack.h"

int precedence(char symbol)
{
    switch (symbol)
    {
        /*higher value means geater precedence*/
    case '^':
        return 3;
    
    case '/':
    case '*':
        return 2;

    case '+':
    case '-':
        return 1;

    default:
        return 0;
    }
}