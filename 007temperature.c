/*
Date   : 30-12-2020
Aim    : Temperature
Source : ansi c ch1 e1.9
*/
#include <stdio.h>

//void main()
//{
//	float F, C;
//	
//	printf("Enter temperature in Celcius: ");
//	scanf("%f",&C);
//	
//	F = (9 * C / 5) + 32;
//	printf("\nTemperature in Fahrenheit = %.2f", F);
//}

void main()
{
	float F, C;
	
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f",&F);
	
	C = (F - 32) * 5 / 9;
	printf("\nTemperature in Celcius = %.2f", C);
}

