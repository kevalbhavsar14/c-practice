/*
Date   : 20-1-2021
Aim    : Function to get rnadomm number between 0 to 100
Source :  
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber()
{
    int a;
    srand(time(0));
    a = rand() % 100;
    return a;
}

void main()
{
    int n;
    n = getRandomNumber();
    printf("%d",n);
}