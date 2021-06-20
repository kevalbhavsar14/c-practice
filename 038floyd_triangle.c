/*
Date   : 2-1-2021
Aim    : Floyd's triangle
Source : ansi c e5.7
*/
#include <stdio.h>

void main()
{
	int i, j, n = 1;
	
	for(i = 0; n <= 91; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("%-2d ", n);
			n++;
		}
		printf("\n");
	}
}

