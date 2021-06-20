/*
Date   : 2-1-2021
Aim    : square root table
Source : ansi c e5.6
*/
#include <stdio.h>
#include <math.h>

void main()
{
	float x, y;
	
	printf("Number");
	for(y = 0; y < 1; y += 0.1)
	printf("   %.1f", y);
	for(x = 0; x < 10; x++)
	{
		printf("\n%.1f   ", x);
		for(y = 0; y < 1; y += 0.1)
		{
			printf("  %.2f", sqrt(x + y));
		}
		//printf("\n");
	}
}

