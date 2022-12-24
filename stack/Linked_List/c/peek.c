#include "stack.h"

int peek()
{
    if(isEmpty())
    {
        printf("stack Underflow\n");
        exit(1);
    }
    return (top -> data);
}