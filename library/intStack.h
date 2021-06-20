/*
Stack data structure
function header

includes:
    dynamic size stack data type using linked list
    stores int type data
    functions:
        createStack
        isEmpty
        push
        pop
        peek
*/

#pragma once

typedef struct StackNode
{
    int data;
    struct StackNode *next;
} StackNode;

typedef struct IntStack
{
    StackNode *start;
} IntStack;


IntStack* createStack();

int isEmpty(IntStack*);

void push(IntStack*, int);
int pop(IntStack*);

int peek(IntStack*);