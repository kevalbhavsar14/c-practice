/*
Date   : 31-12-2020
Aim    : display right most digit of floating point number
Source : ansi c e3.2 e3.3
*/
#include <stdio.h>

void main()
{
	float n;
	
	printf("Enter floating point number: ");
	scanf("%f",&n);
	
	printf("\nRight-most digit of intergral part of the number: %d", (int)n % 10);
	printf("\nTwo Right-most digits of intergral part of the number: %d", (int)n % 100);
}

