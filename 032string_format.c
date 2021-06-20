/*
Date   : 2-1-2021
Aim    : formatted string
Source : ansi c e4.1
*/
#include <stdio.h>

void main()
{
	char s1[20], s2[20];
	
	printf("Enter string: ");
	scanf("%4s %s", &s1, &s2);
	
	printf("\n%s %s\n", s1, s2);
	printf("\n%s\n%s\n", s1, s2);
	printf("\n%.1s.%.1s.", s1, s2);
}

