/*
Date   : 1-1-2021
Aim    : sum, average, largest, smallest
Source : ansi c e3.15
*/
#include <stdio.h>

void main()
{
	int a, b, c;
	int sum, smallest, largest;
	float average;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	sum = a + b + c;
	average = sum / 3;
	largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
	
	printf("\nSum = %d", sum);
	printf("\nAverage = %.2f", average);
	printf("\nLargest = %d", largest);
	printf("\nSmallest = %d", smallest);
}

