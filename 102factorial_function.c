/*
Date   : 26-1-2021
Aim    : factorial rceursive function
Source : Source
*/
#include <stdio.h>

// function: finds factorial of given number
// parameters: n: number which we have to find factorial of
// returns: factorial of number
// recursive
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

void main()
{
    int a, fact;
    printf("Enter number: ");
    scanf("%d",&a);
    fact = factorial(a);
    printf("Factorial = %d", fact);
}