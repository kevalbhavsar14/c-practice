/*
Date   : 31-12-2020
Aim    : list of items with prices
Source : ansi c e2.5
*/
#include <stdio.h>

void main()
{
	float rice, sugar;
	
	printf("Enter the price of Rice: ");
	scanf("%f",&rice);
	printf("Enter the price of Sugar: ");
	scanf("%f",&sugar);
	
	printf("\n*** LIST OF ITEMS ***");
	printf("\nItem	 Price");
	printf("\nRice	 Rs %.2f",rice);
	printf("\nSugar	 Rs %.2f",sugar);	
}

