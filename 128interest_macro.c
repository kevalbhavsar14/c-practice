/*
Date   : 14-2-2021
Aim    : simple interest macro
Source : let us c 7.d
*/
#include <stdio.h>
#include "interest.h"

void main()
{
    float p, r, n;
    float i, a;
    printf("Enter principle amount, rate and time: ");
    scanf("%f%f%f",&p,&r,&n);
    i = INTEREST(p,r,n);
    a = AMOUNT(p,r,n);
    printf("Interest = %f\n",i);
    printf("Total amount = %f",a);
}