/*
Date   : 30-12-2020
Aim    : Area of triangle
Source : ansi c ch1 e1.10
*/
#include <stdio.h>
#include <math.h>

void main()
{
	double A, S, a, b, c;
	
	printf("Enter sides of triangle: ");
	scanf("%f%f%f", &a, &b, &c);
	
	S = (a + b + c) / 2.0;
	A = sqrt( S * (S - a) * (S - b) * (S - c));
	
	printf("\nArea of triangle = %lf",A);
}

