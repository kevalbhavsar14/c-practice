/*
Date   : Date of creation
Aim    : Aim of the program
Source : Source of the program
*/
#include <stdio.h>
#include "library/vector.h"

void main()
{
    vector v1, v2, v3;

    v1 = createVector3D(1, 3, 2);
    v2 = createVector3D(4, -2, 1);

    printf("v1 : ");
    printVector(v1);
    printf("\nv2 : ");
    printVector(v2);
    
    v3 = crossProduct(v1, v2);

    printf("\nv3 : ");
    printVector(v3);
    
    printf("\nMagnitude of v1 : %f", magnitude(v1));

    printf("\nAngle between v1 and v2 : %f", angle(v1, v2));

    v1 = normalize(v1);
    printf("\nNormalized v1 : ");
    printVector(v1);
    printf("\nMagnitude of v1 : %f", magnitude(v1));

}