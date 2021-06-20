/*
Date   : 31-12-2020
Aim    : largest of three values
Source : ansi c e3.13
*/
#include <stdio.h>

void main()
{
	int largest, a, b, c;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("Largest value = %d", largest);
}

