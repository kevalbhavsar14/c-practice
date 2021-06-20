/*
Date   : 3-1-2021
Aim    : s pattern
Source : ansi c e6.12
*/
#include <stdio.h>

void main()
{
	int i, j;
	
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 18; j++)
		{
			if(i > 2 && i < 6 && j > 3)
				printf("");
			else if(i > 8 && i < 12 && j < 14)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}

