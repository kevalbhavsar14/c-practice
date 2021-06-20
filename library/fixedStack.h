/*
Stack data structure
function header

includes:
    fixed size stack data type using array
    functions:
        createStack
        isEmpty
        isFull
        push
        pop
        peek
*/

#pragma once

typedef struct Stack
{
    int *arr;
    int top;
    int cap;
} Stack;

Stack* createStack(int);

int isEmpty(Stack*);
int isFull(Stack*);

void push(Stack*, int);
int pop(Stack*);

int peek(Stack*);