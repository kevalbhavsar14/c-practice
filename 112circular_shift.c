/*
Date   : 31-1-2021
Aim    : function to circularly shift values of three variables
Source : let us c 5.g
*/
#include <stdio.h>

// function: circularly shifts values of three given variables
// parameters: *a: holds address of one of the variables of which we have to shift values of
//             *b: holds address of one of the variables of which we have to shift values of
//             *c: holds address of one of the variables of which we have to shift values of
void circularshift(int* a,int* b, int* c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

void main()
{
    int x = 5, y = 8, z = 10;
    circularshift(&x, &y, &z);
    printf("x=%d y=%d z=%d",x,y,z);
}