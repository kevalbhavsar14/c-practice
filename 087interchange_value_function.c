/*
Date   : 21-1-2021
Aim    : interchange variable value for global variables
Source : ansi c e9.1
*/
#include <stdio.h>

void exchange(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int x = 10, y = 20;
    exchange(&x,&y);
    printf("x = %d\ty = %d",x,y);
}