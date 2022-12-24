#include "stack.h"

int space(char c)
{
    /*if symbol is a blank space or tab*/
    if (c == ' ' || c == '\t')
    {
        return (-1);
    }
    return (0);
}