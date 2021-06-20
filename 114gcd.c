/*
Date   : 31-1-2021
Aim    : gcd function
Source : let us c 5.k
*/
#include <stdio.h>

int gcd(int a, int b)
{
    if (a%b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}

void main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c = gcd(a,b);
    printf("gcd = %d",c);
}