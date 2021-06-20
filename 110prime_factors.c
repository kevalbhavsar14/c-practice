/*
Date   : 31-1-2021
Aim    : prime factors function
Source : lut us c 5.b
*/
#include <stdio.h>

// function: prints prime factors of given number
// parameters: n: number which we have to find prime factors of
// iterative
void primefactors(int n)
{
    int i, j;
    for (i = 2; i <= n/2; i++)
    {
        if (n%i == 0)
        {
            for (j = 2; j < n; j++)
            {
                if (n%i == 0)
                {
                    printf("%d ",i);
                    break;
                }
            }
        }
    }
}

void main()
{
    int n = 15;
    primefactors(n);
}