/*
Date   : 3-1-2021
Aim    : cloth discount
Source : ansi c e5.8
*/
#include <stdio.h>

void main()
{
	int pur_amt;
	float net_amt;
	char item;
	
	printf("Enter purchase amount: ");
	scanf("%d", &pur_amt);
	fflush(stdin);
	printf("Select item bought\n");
	printf("M - Mill cloth\n");
	printf("H - Handloom items\n");
	scanf("%c", &item);
	
	switch(item)
	{
		case 'M':
			if(pur_amt > 100 && pur_amt <= 200)
				net_amt = pur_amt - pur_amt*5/100;
			else if(pur_amt > 200 && pur_amt <= 300)
				net_amt = pur_amt - pur_amt*7.5/100;
			else if(pur_amt > 300)
				net_amt = pur_amt - pur_amt*10/100;
			else
				net_amt = pur_amt;
			break;
			
		case 'H':
			if(pur_amt < 100)
				net_amt = pur_amt - pur_amt*5/100;
			else if(pur_amt > 100 && pur_amt <= 200)
				net_amt = pur_amt - pur_amt*7.5/100;
			else if(pur_amt > 200 && pur_amt <= 300)
				net_amt = pur_amt - pur_amt*10/100;
			else if(pur_amt > 300)
				net_amt = pur_amt - pur_amt*15/100;
			break;
			
		default:
			printf("Invalid choice");
			break;
	}
	printf("\nNet amount to be paid = Rs %.2f", net_amt);
}

