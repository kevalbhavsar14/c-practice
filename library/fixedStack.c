/*
Date   : 30-3-2021
Aim    : 
Source : 
*/
#include <stdio.h>
#include <stdlib.h>
#include "fixedStack.h"

Stack* createStack(int cap)
{
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    stack->cap = cap;
    stack->arr = (int*)malloc(cap * sizeof(int));
    return stack;
}

int isEmpty(Stack *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(Stack *stack)
{
    if (stack->top == stack->cap - 1)
    {
        return 1;
    }
    return 0;
}

void push(Stack *stack, int data)
{
    if (isFull(stack))
    {
        printf("Stack is full\n");
        return;
    }
    stack->arr[++stack->top] = data;
}

int pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return 0;
    }
    return stack->arr[stack->top--];
}

int peek(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return 0;
    }
    return stack->arr[stack->top];
}


