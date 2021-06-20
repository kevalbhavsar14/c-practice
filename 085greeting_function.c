/*
Date   : 20-1-2021
Aim    : greeting function
Source :  
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int greet(char str[])
{
    int i, n, count = 0;
    srand(time(0));
    n = (rand() % 10) + 1;
    for(i = 0; i < n; i++)
    {
        printf("Hello %s!\n", str);
        count++;
    }
    return count;
}

void main()
{
    char name[10];
    int count;
    printf("Enter name: ");
    gets(name);
    count = greet(name);
    printf("%d",count);
}