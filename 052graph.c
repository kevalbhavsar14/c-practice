/*
Date   : 3-1-2021
Aim    : y = sin(x) graph
Source : ansi c e6.17
*/
#include <stdio.h>
#include <math.h>
#define pi 3.14

void main()
{
	int x;
	float y, i;
	
	printf("                    y ----->             \n");
	printf(" 0---------------------------------------\n");
	for(x = 0; x <= 560; x += 15)
	{
		y = 1 + sin(x*pi/180);
		if(x == 90)
			printf("x |");
		else
			printf("  |");
		
		for(i = 0; i <= y; i += 0.1)
		{
			printf(" ");
		}
		printf("o\n");
	}
}

