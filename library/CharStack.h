/*
Stack data structure
function header

includes:
    dynamic size stack data type using linked list
    stores char type data
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
    char data;
    struct StackNode *next;
} StackNode;

typedef struct CharStack
{
    StackNode *start;
} CharStack;


CharStack* createStack();

char isEmpty(CharStack*);

void push(CharStack*, char);
char pop(CharStack*);

char peek(CharStack*);