/*
Date   : 2-1-2021
Aim    : chart
Source : ansi c e4.4
*/
#include <stdio.h>

void main()
{
	float n1, n2, n3, n4;
	int i, j, k;
	
	printf("Enter four number between 0.0 and 20.0 : ");
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	
	//for(i = 0; i < 4; i++)
	//{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < (int)(n1+0.5f); k++)
			{
				printf("*");
			}
			if(j==1)
			printf(" %.2f", n1);
			printf("\n");
		}
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < (int)(n2+0.5f); k++)
			{
				printf("*");
			}
			if(j==1)
			printf(" %.2f", n2);
			printf("\n");
		}
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < (int)(n3+0.5f); k++)
			{
				printf("*");
			}
			if(j==1)
			printf(" %.2f", n3);
			printf("\n");
		}
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < (int)(n4+0.5f); k++)
			{
				printf("*");
			}
			if(j==1)
			printf(" %.2f", n4);
			printf("\n");
		}
	//}
}

