/*
Date   : Date of creation
Aim    : Aim of the program
Source : Source of the program
*/
#include <stdio.h>
#include "library/fixedStack.h"

void main()
{
    Stack *stack = createStack(10);
    for (int i = 0; i < 5; i++)
    {
        push(stack, i*10);
        printf("%d is pushed\n", peek(stack));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d is popped\n", pop(stack));
    }
    pop(stack);
    printf("%d\n", peek(stack));
    
}