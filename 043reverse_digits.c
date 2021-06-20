/*
Date   : 3-1-2021
Aim    : reverse digits
Source : ansi c e6.1
*/
#include <stdio.h>

void main()
{
	int n, rev;
	printf("Enter number: ");
	scanf("%d", &n);
	
	for (;n != 0;)
	{
		rev *= 10;
		rev += n % 10;
		n /= 10;
	}
	printf("\n%d", rev);
}

