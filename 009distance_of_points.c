/*
Date   : 30-12-2020
Aim    : distance between two points
Source : ansi c ch1 e1.11
*/
#include <stdio.h>
#include <math.h>

void main()
{
	int x1, y1, x2, y2;
	float D;
	
	printf("Enter point (x1, y1): ");
	scanf("%d%d", &x1, &y1);
	printf("Enter point (x2, y2): ");
	scanf("%d%d", &x2, &y2);
	
	D = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	printf("\nDistance between two points = %f",D);
}

