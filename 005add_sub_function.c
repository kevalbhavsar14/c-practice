/*
Date   : 30-12-2020
Aim    : add and sub function
Source : ansi c ch1 e1.7
*/
#include <stdio.h>

int add(int, int);
int sub(int, int);

void main()
{
	int a = 20, b = 10;
	printf("\n%d + %d = %d", a, b, add(a,b));
	printf("\n%d - %d = %d", a, b, sub(a,b));
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

