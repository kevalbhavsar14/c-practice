/*
Date   : 21-1-2021
Aim    : modular calculator using function
Source : ansi c e9.9
*/
#include <stdio.h>

int a, b, ans;
char op;

void read();
void calculate();
void print();
void add();
void sub();
void mul();
void div();

void main()
{
    read();
    calculate();
    print();
}

void read()
{
    printf("Enter two numbers with operator: ");
    scanf("%d %c %d", &a, &op, &b);
}

void calculate()
{
    switch (op)
    {
    case '+':
        add();
        break;
    
    case '-':
        sub();
        break;
    
    case '*':
        mul();
        break;
    
    case '/':
        div();
        break;
    }
}

void print()
{
    if(op == '+' || op == '-' || op == '*' || op == '/')
    {
        printf("= %d", ans);
    }
    else
    {
        printf("Invalid operator.");
    }
    
}

void add()
{
    ans = a + b;
}

void sub()
{
    ans = a - b;
}

void mul()
{
    ans = a * b;
}

void div()
{
    ans = a / b;
}