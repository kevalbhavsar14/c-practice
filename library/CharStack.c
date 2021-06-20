/*
Date   : 30-3-2021
Aim    : 
Source : 
*/
#include <stdio.h>
#include <stdlib.h>
#include "CharStack.h"

CharStack* createStack()
{
    CharStack *stack = (CharStack*)malloc(sizeof(CharStack));
    stack->start = NULL;
}

char isEmpty(CharStack *stack)
{
    if (stack->start)
    {
        return 0;
    }
    return 1;
}

void push(CharStack *stack, char data)
{
    StackNode *new = (StackNode*)malloc(sizeof(StackNode));
    new->next = stack->start;
    stack->start = new;
    stack->start->data = data;
}

char pop(CharStack *stack)
{
    if (isEmpty(stack))
    {
        // printf("Stack is empty\n");
        return -1;
    }
    StackNode *temp = stack->start;
    int popped = stack->start->data;
    stack->start = stack->start->next;
    free(temp);
    return popped;
}

char peek(CharStack *stack)
{
    if (isEmpty(stack))
    {
        // printf("Stack is empty\n");
        return -1;
    }
    return stack->start->data;
}

