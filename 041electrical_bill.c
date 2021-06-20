/*
Date   : 3-1-2021
Aim    : electricity bill
Source : ansi c e5.12
*/
#include <stdio.h>

void main()
{
	int units;
	float amount;
	
	printf("Enter units used: ");
	scanf("%d", &units);
	
	if(units <= 200) //per unit charge
		amount = units * 0.80;
	else if(units <= 300)
		amount =  (units - 200) * 0.90 + 200*0.80;
	else
		amount =  (units - 300) + 100*0.90 + 200*0.80;
		
	amount += 100; //meter charge
	
	if(amount > 400) //additional surcharge if total amount > 400
		amount += amount * 15/100;
		
	printf("\nTotal amount charged = Rs %.2f", amount);
}

