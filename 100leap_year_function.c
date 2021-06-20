/*
Date   : 25-1-2021
Aim    : function to check wether given year is leap or not
Source : ansi c e9.19
*/
#include <stdio.h>

int leap(int year)
{
    if (year % 4 == 0 && year % 100 || year % 400 == 0)
    {
        return 1;
    }
    return 0;
}

void main()
{
    int a;
    a = leap(2020);
    printf("%d",a);
}