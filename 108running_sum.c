/*
Date   : 29-1-2021
Aim    : running sum using recursion
Source : let us c 5.e
*/
#include <stdio.h>

// function: print running sum of n natural numbers
// parameters: n: amount of numbers
// returns: sum of n natural numbers
// recursive
int runningsum(int n)
{
    int sum;
    if (n == 1)
    {
        printf("%d ",n);
        return 1;
    }
    else
    {
        sum = n + runningsum(n-1);
        printf("%d ",sum);
        return sum;
    }
}

void main()
{
    runningsum(25);
}