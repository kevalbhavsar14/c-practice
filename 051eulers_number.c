/*
Date   : 3-1-2021
Aim    : compute euler's number
Source : ansi c e6.13
*/
#include <stdio.h>

int fact(int);

void main()
{
	int n=0, i=1;
	float sum = 1;

	while (i < 11)
	{
		n = sum;
		int f = fact(i);
		printf("\n%d ",f);
		sum += (1.0 / f);
		printf("%f",sum);
		i++;
	}
	
	printf("\nEuler's number = %f", sum);
}

int fact(int n)
{
	if (n < 2) return 1;
	return n * fact(n-1);
}

