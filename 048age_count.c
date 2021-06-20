/*
Date   : 3-1-2021
Aim    : age
Source : ansi c e6.8
*/
#include <stdio.h>

void main()
{
	int age, count = 0, i;
	
	printf("Enter age of 10 people:\n");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &age);
		if(age < 50 || age > 60)
			continue;
			count++;
	}
	printf("Number of people between age 50 and 60: %d", count);
}

