/*
Date   : 30-3-2021
Aim    : 
Source : 
*/
#include <stdio.h>
#include <stdlib.h>
#include "intStack.h"

IntStack* createStack()
{
    IntStack *stack = (IntStack*)malloc(sizeof(IntStack));
    stack->start = NULL;
}

int isEmpty(IntStack *stack)
{
    if (stack->start)
    {
        return 0;
    }
    return 1;
}

void push(IntStack *stack, int data)
{
    StackNode *new = (StackNode*)malloc(sizeof(StackNode));
    new->next = stack->start;
    stack->start = new;
    stack->start->data = data;
}

int pop(IntStack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return 0;
    }
    StackNode *temp = stack->start;
    int popped = stack->start->data;
    stack->start = stack->start->next;
    free(temp);
    return popped;
}

int peek(IntStack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return 0;
    }
    return stack->start->data;
}

