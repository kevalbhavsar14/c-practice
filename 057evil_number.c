/*
Date   : 7-1-2021
Aim    : evil and odious number
Source : c patterns app
*/
#include <stdio.h>

void main()
{
    int n, binary=0, count1 = 0, i;
	
	// printf("Enter decimal number: ");
	// scanf("%d", &i);
	
    for(i = 50; i <= 60; i++)
    {
        n = i;
        while (n)
        {
            binary = n % 2;
            n /= 2;
            if(binary)
            count1++;
        }
        if(count1 % 2)
        printf("\n%d is odious(%d)", i, count1);
        else 
        printf("\n%d is evil(%d)", i, count1);
    }
}