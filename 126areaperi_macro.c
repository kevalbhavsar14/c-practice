/*
Date   : 14-2-2021
Aim    : area perimeter
Source : let us c 7.b
*/
#include <stdio.h>
#include "areaperi.h"

void main()
{
    float r = 3, area, peri;
    area = AREA(r);
    peri = PERI(r);
    printf("Area = %f\n",area);
    printf("Perimeter = %f\n",peri);
}