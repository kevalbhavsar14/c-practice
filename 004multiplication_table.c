/*
Date   : 30-12-2020
Aim    : Multiplication table
Source : ansi c ch1 e1.6
*/
#include <stdio.h>

void main()
{
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		printf("\n5 * %2d = %d", i, i * 5);
	}
}

