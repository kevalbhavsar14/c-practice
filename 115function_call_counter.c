/*
Date   : Date
Aim    : Aim
Source : Source
*/
#include <stdio.h>

void f()
{
    static int count = 0;
    count++;
    printf("%d",count);
}

void g()
{
    static int count;
    count = 0;
    count++;
    printf(" %d\n",count);
}

void main()
{
    f(); g();
    f(); g();
    f(); g();
    f(); g();
}