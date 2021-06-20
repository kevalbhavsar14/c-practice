/*
Date   : 3-1-2021
Aim    : pattern
Source : ansi c e6.7
*/
#include <stdio.h>

void main()
{
	int i, j;

	for(i = 1; i <= 5; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	
	for(i = 1; i <= 5; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("%d ", i);
		}
		for(j = 5; j > i; j--)
		{
			printf("  ");
		}
		for(j = 0; j <= i; j++)
		{
			printf("  ");
		}
		for(j = 5; j >= i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}

