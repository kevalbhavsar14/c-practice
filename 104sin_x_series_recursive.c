/*
Date   : 26-1-2021
Aim    : Aim
Source : ansi c 9.3
*/
#include <stdio.h>
#include <math.h>

// function: finds value of sin(x) from series
// parameters: x: angle of which sine we have to find
//             n: number of terms
// returns: value of sin(x)
// recursive
float f(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return f(x,n-1) + pow(-1,n+1)*(pow(x, n*2-1)/fact(n*2-1));
    }
}

// function: finds factorial of given number
// parameters: n: number which we have to find factorial of
// returns: factorial of number
// recursive
int fact(n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

void main()
{
    int x = 3;
    float a = f(x, 4);
    printf("%f",a);
}