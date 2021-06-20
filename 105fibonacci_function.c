/*
Date   : 26-1-2021
Aim    : fibonacci series recursive function
Source : ansi c e9.5
*/
#include <stdio.h>

// function: finds value of given term in fibonacci series
// parameters: n: number of term
// returns: value of nth term in fibonacci series
// recursive
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

// function: prints fibonacci series until n terms
// parameters: n: number of terms
// iterative
void printFibonacci(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }
}

void main()
{
    printFibonacci(10);
}