/*
Date   : 26-1-2021
Aim    : nCr recursive function
Source : 
*/
#include <stdio.h>

// function: finds Number of combinations for given n and r values
// parameters: n: total numbers
//             r: particicans
// returns: Number of combinations
// recursive
int ncr(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else if (r == 1)
    {
        return n;
    }
    else
    {
        return ncr(n-1, r) + ncr(n-1, r-1);
    }
}

void main()
{
    int a;
    a = ncr(4, 3);
    printf("%d",a);
}