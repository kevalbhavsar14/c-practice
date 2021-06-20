/*
Date   : 1-1-2021
Aim    : sin and cos table
Source : ansi c e3.17
*/
#include <stdio.h>
#include <math.h>
#define pi 3.14

void main()
{
	int x;
	
	printf("x(degrees)  sin(x)  cos(x)");
	for(x = 0; x <= 180; x += 15)
	{
		printf("\n%-12d%-8.2f%.2f", x, sin(x*pi/180), cos(x*pi/180));
	}
}

