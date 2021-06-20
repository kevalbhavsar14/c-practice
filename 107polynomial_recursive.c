/*
Date   : 26-1-2021
Aim    : polynomial recursive function
Source : ansi c e9.4
*/
#include <stdio.h>

// function: find polynomial for given array of coefficients
// parameters: a[]: array of coefficients
//             x: value of x in equation
//             n: number of terms
// returns: solution of the equatiom
// recursive
int P(int a[], int x, int n)
{
    if(n == 1)
    {
        return a[n-1];
    }
    else
    {
        return P(a, x, n-1)*x + a[n-1];
    }
}

void main()
{
    int a[] = {3,-1,9,15,-13};
    int x = 1, ans;
    ans = P(a,x,5);
    printf("%d",ans);
}