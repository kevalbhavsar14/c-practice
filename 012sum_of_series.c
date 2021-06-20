/*
Date   : 31-12-2020
Aim    : sum of series for n
Source : ansi c e2.1
*/
#include <stdio.h>

void main()
{
	int n, i;
	float sum = 0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	printf("\nSeries: 1 ");
	for (i = 1; i <= n; i++)
	{
		sum += 1.0 / i;
		if (i != 1)
		printf("+ 1/%d ", i);
	}
	printf("\nSum of series = %f", sum);
}

