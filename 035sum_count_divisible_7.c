/*
Date   : 2-1-2021
Aim    : sum and count of numbers between 100 and 200 divisible by 7
Source : ansi c e5.2
*/
#include <stdio.h>

void main()
{
	int n, sum = 0, count = 0;
	
	for(n = 101; n < 200; n++)
	{
		if(!(n % 7))
		{
			sum += n;
			count++;
		}
	}
	printf("Sum = %d", sum);
	printf("\nCount = %d", count);
}

