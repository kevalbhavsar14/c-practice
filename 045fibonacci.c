/*
Date   : 3-1-2021
Aim    : fibonacci
Source : ansi c e6.4
*/
#include <stdio.h>

void main()
{
	int i, n = 1, p1 = 1, p2 = 0;
	printf("1 ");
	do {
		n = p1 + p2;
		printf("%d ", n);
		p2 = p1;
		p1 = n;
		i++;
	} while(i <= 15);
}

