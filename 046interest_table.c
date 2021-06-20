/*
Date   : 3-1-2021
Aim    : compound interest table
Source : ansi c e6.6
*/
#include <stdio.h>
#include <math.h>

void main()
{
	int p, n;
	float r, v;
	
	printf("Principle(p)  Rate(r)  years(n)  Value(v)");
	for(p = 1000; p <= 10000; p += 1000)
	{
		for(r = 0.10; r < 0.21; r += 0.01)
		{
			for(n = 1; n <= 10; n++)
			{
				v = p * pow(1 + r, n);
				printf("\n%-13d %-8.2f %-9d %.2f", p, r, n, v);
			}
		}
	}	
}

