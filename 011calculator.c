/*
Date   : 30-12-2020
Aim    : simple arithmetic calculator 
Source : ansi c ch1 e1.15
*/
#include <stdio.h>

void main()
{
	int x, y;
	
	printf("Enter values of x and y: ");
	scanf("%d%d", &x, &y);
	
	printf("\nx              = %d\t y           = %d", x, y);
	printf("\nAddition       = %d\t Subtraction = %d", x+y, x-y);
	printf("\nMultiplication = %d\t Division    = %d", x*y, x/y);
}

