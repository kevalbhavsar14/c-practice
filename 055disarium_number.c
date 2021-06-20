/*
Date   : 7-1-2021
Aim    : Disarium Number
Source : C patterns app
*/
#include <stdio.h>
#include <math.h>

void main()
{
    int n, i, rev, sum, pos;

    for(i = 1; i <= 200; i++)
    {
        n = i;
        sum = 0;
        rev = 0;
        while(n)
        {
            rev *= 10;
            rev += n % 10;
            n /= 10;
        }
        pos = 1;
        while(rev)
        {
            sum += pow(rev % 10, pos++);
            rev /= 10;
        }
        if(i == sum)
        printf("%d\n", i);
    }
}