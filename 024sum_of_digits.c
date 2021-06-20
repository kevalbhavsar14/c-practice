/*
Date   : 31-12-2020
Aim    : sum of digits
Source : ansi c e3.11
*/
#include <stdio.h>

void main()
{
	int n, sum;
	printf("Enter number: ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("\nSum of digits = %d",sum);
}

