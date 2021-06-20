/*
Date   : 3-1-2021
Aim    : factorial
Source : ansi c e6.2
*/
#include <stdio.h>

void main()
{
	int m, i, fact = 1;
	
	printf("Enter the value of m: ");
	scanf("%d", &m);
	
	for(i = 0; i < m; i++)
	{
		fact *= m - i;
	}
	printf("\nm! = %d", fact);
}

