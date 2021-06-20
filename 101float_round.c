/*
Date   : 25-1-2021
Aim    : function to round floating point value to 2 dceimal points
Source : ansi c e9.20
*/
#include <stdio.h>
#include <math.h>

// function: rounds given floating point number to 2 decimal points
// parameters: x: number to be rounded
// returns: rounded number
float roundfl(float x)
{
    x = round(x*100) / 100;
    return x;
}

void main()
{
    float a = 123.4567;
    a = roundfl(a);
    printf("%.2f",a);
}