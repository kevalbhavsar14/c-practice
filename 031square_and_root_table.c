/*
Date   : 1-1-2021
Aim    : square and square root table
Source : ansi c e3.18
*/
#include <stdio.h>
#include <math.h>

void main()
{
	int n;
	
	printf("Number  Square-root  Square");
	for(n = 0; n <=100; n += 10)
	{
		printf("\n%-8d%-13.2f%d", n, sqrt(n), n*n);
	}
}

