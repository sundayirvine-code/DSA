#include "stack.h"

int pop()
{
    int val;
    Node *temp = top;
    if(isEmpty())
    {
        printf("stack Underflow\n");
        exit(1);
    }
    val = top -> data;
    top = top -> next;
    free(temp);
    temp = NULL;
    return (val);
}