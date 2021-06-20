/*
Date   : 31-12-2020
Aim    : count the number of positive and negative numbers
Source : ansi c e2.6
*/
#include <stdio.h>

void main()
{
	int n, count_pos = 0, count_neg = 0;
	
	do {
		printf("Enter number: ");
		scanf("%d",&n);
		
		if (n > 0)
		count_pos++;
		else if (n < 0)
		count_neg++;
	} while (n != 0);
	printf("\nNumber of Positive numbers = %d", count_pos);
	printf("\nNumber of Negative numbers = %d", count_neg);
}

