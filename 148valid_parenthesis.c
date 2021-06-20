/*
Date   : 31-3-2021
Aim    : Aim of the program
Source : Source of the program
*/
#include <stdio.h>
#include <string.h>
#include "library/CharStack.h"

int isValid(char*);
int parity(char, char);

void main()
{
    char* str = "[]{()]]";
    if (isValid(str))
        printf("Parenthesis are valid\n");
    else
        printf("Parenthesis are not valid\n");
}

int isValid(char *str)
{
    if (!str)
        return 0;
    CharStack *stack = createStack();

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(stack, str[i]);
        }
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if (parity(peek(stack), str[i]))
            {
                pop(stack);
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    if (!isEmpty(stack))
    {
        return 0;
    }
    return 1;
}

int parity(char op, char cl)
{
    return ((op == '(' && cl == ')') || (op == '[' && cl == ']') || (op == '{' && cl == '}'));
}
