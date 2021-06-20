/*
Date   : 21-1-2021
Aim    : function if arguement is prime then return 1 else return 0
Source : ansi c e9.7
*/
#include <stdio.h>

int prime(int a)
{
    int i, flag = 0;
    for(i = 2; i < a; i++)
    {
        if(a % i == 0 && a > 2)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

void main()
{
    int n, a;
    scanf("%d",&n);
    a = prime(n);
    if(a)
    {
        printf("%d is prime",n);
    }
    else
    {
        printf("%d is not prime",n);
    }
}