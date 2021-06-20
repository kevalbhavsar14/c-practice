/*
Date   : 9-2-2021
Aim    : complex arithmetic
Source : brain
*/
#include <stdio.h>

typedef struct
{
    int r;
    int i;
}complex;

complex addComplex(complex, complex);
complex mulComplex(complex, complex);
complex readComplex();
void printComplex(complex);

void main()
{
    complex c1, c2, c_sum, c_pro;
    printf("Enter 1st complex number (a+bi):");
    c1 = readComplex();    
    printf("Enter 2nd complex number (a+bi):");
    c2 = readComplex();

    c_sum = addComplex(c1, c2);
    printf("\nAddition = ");
    printComplex(c_sum);

    c_pro = mulComplex(c1, c2);
    printf("\nMultiplication = ");
    printComplex(c_pro);
}

complex addComplex(complex c1, complex c2)
{
    complex c3;
    c3.r = c1.r + c2.r;
    c3.i = c1.i + c2.i;
    return c3;
}

complex mulComplex(complex c1, complex c2)
{
    complex c3;
    c3.r = c1.r*c2.r - c1.i*c2.i;
    c3.i = c1.r*c2.i + c1.i*c2.r;
    return c3;
}

void printComplex(complex c)
{
    if (c.i < 0)
        printf("%d %di",c.r,-c.i);
    else
        printf("%d + %di",c.r,c.i);
}

complex readComplex()
{
    complex c;
    scanf("%d+%di",&c.r,&c.i);
    return c;
}