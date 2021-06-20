/*
Date   : 30-12-2020
Aim    : Find perimeter and area of circle from points
Source : ansi c ch1 e1.12
*/
#include <stdio.h>
#include <math.h>
#define pi 3.14

void main()
{
	int x1=0, y1=0, x2=4, y2=5;
	float r, a, p;
	
	printf("center of circle is (%d,%d)\n", x1, y1);
	printf("a point on the circle is (%d,%d)\n", x2, y2);
	
	r = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	printf("Radius = %f\n",r);
	
	p = 2 * pi * r;
	a = pi * r * r;
	
	printf("Perimeter of circle = %f\n",p);
	printf("Area of circle = %f\n",a);
}

