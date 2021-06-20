/*
Date   : 31-12-2020
Aim    : calculate distance
Source : ansi c e3.8
*/
#include <stdio.h>

void main()
{
	float distance, u, a, t, ct, d;
	
	printf("Enter initial velocity(m/s) and acceleration(m/s^2): ");
	scanf("%f%f", &u, &a);
	printf("Enter time interval(s): ");
	scanf("%f", &t);
	printf("Enter total duration(s): ");
	scanf("%f", &d);
	
	printf("\nTime	Distance");
	for (ct = 0; ct <= d; ct += t)
	{
		distance = u*ct + (a*ct*ct) / 2;
		printf("\n%-8.2f%.2f", ct, distance);
	}
}

