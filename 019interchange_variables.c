/*
Date   : 31-12-2020
Aim    : interchnage values of variables
Source : ansi c e3.1
*/
#include <stdio.h>

void main()
{
	int x, y, z, temp;
	printf("Enter values of x, y and z: ");
	scanf("%d%d%d", &x, &y, &z);
	
	temp = x;
	x = y;
	y = z;
	z = temp;
	
	printf("\nx = %d, y = %d, z = %d", x, y, z);
}

