/*
Date   : 2-1-2021
Aim    : 
Source : ansi c e5.9
*/
#include <stdio.h>

void main()
{
	int x, y;
	
	printf("Enter x: ");
	scanf("%d", &x);
	
	y = (x > 0) ? 1 : ((x < 0) ? -1 : 0);
	
//	if(x > 0)
//		y = 1;
//	else
//	{
//		if(x < 0)
//			y = -1;
//		else
//			y = 0;
//	}

	printf("\ny = %d",y);
}

