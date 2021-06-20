/*
Date   : 1-1-2021
Aim    : sum, average, largest, smallest indefinate values
Source : ansi c e3.15 bonus
*/
#include <stdio.h>
#include <limits.h>

void main()
{
	int n = 1, sum = 0, large = 0, small = INT_MAX, count = 0;
	float avg;

	printf("Enter numbers (0 to stop): ");
	while(n)
	{
		scanf("%d", &n);
		
		sum += n;
		if(n)
		count++;
		if(n > large)
		large = n;
		if(n < small && n != 0)
		small = n;
	}
	avg = sum / count;
	
	printf("\nSum = %d", sum);
	printf("\nAverage = %.2f", avg);
	printf("\nLargest = %d", large);
	printf("\nSmallest = %d", small);
}

