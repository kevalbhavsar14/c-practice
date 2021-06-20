/*
Date   : 31-12-2020
Aim    : find wether m is multiple of n
Source : ansi c e3.14
*/
#include <stdio.h>

void main()
{
	int m, n;
	printf("Enter m and n: ");
	scanf("%d%d", &m, &n);
	
	if(m % n == 0)
	printf("%d is a multiple of %d", m, n);
	else
	printf("%d is a not multiple of %d", m, n);
}

