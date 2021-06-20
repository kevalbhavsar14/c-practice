/*
Date   : 31-12-2020
Aim    : use of symbolic constant in real-life application
Source : ansi c e2.10
*/
#include <stdio.h>
#define PI 3.14159

void main()
{
	float r = 3.5, a, c;
	
	a = PI * r * r;
	c = 2 * PI * r;
	
	printf("\nArea of circle = %f",a);
	printf("\nCircrumference of circle = %f",c);
}

