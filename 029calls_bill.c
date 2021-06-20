/*
Date   : 1-1-2021
Aim    : mobile service bill
Source : ansi c e3.16
*/
#include <stdio.h>

void main()
{
	int code, calls, i;
	float bill = 250;
	
	for(i = 0; i < 10; i++)
	{
		bill = 250;
		printf("\nEnter customer code: ");
		scanf("%d", &code);
		printf("Enter amount of calls made: ");
		scanf("%d", &calls);
		
		if(calls > 100)
		bill += 1.25 * (calls - 100);
	
		printf("\nCustomer code : %d", code);
		printf("\nCalls made    : %d", calls);
		printf("\nAmount        : Rs. %.2f\n", bill);
	}
}

