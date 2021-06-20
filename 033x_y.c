/*
Date   : 2-1-2020
Aim    : 
Source : ANSI C E4.2
*/
#include <stdio.h>

void main()
{
	float x, y, a, b, c;
	
	printf("Enter values of x and y : ");
	scanf("%f%f", &x, &y);
	
	a = (x + y) / (x - y);
	b = (x + y) / 2;
	c = (x + y) * (x - y);
	
	printf("%f\t%f\t%f", a, b, c);
}

