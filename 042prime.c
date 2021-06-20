/*
Date   : 3-1-2021
Aim    : prime number
Source : ansi c e5.14
*/
#include <stdio.h>

void main()
{
	int n, i, flag = 0;
	
	//printf("Enter a positive number: ");
	//scanf("%d", &n);
	printf("Prime numbers between 100 and 200:");
	for(n = 100; n <= 200; n++)
	{
		flag = 0;
		for(i = 2; i < n; i++)
		{
			if(!(n % i))
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
			printf("\n%d", n);
		//else
		//	printf("%d is not a prime number", n);
	}
}

