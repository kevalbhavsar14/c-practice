/*
Date   : 31-1-2021
Aim    : decimal to binary function recursive
Source : let us c 5.d
*/
#include <stdio.h>

// function: finds binary equivelent of a given decimal number
// parameters: n: decimal number which we have to find binary of
// returns: binary equivelent of n
// recursive
long binary(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
	return (binary(n/2)*10)+n%2;
    }
}

void main()
{
    int n = 67;
    long b = binary(n);
    printf("%ld",b);
}