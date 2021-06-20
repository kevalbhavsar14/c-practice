/*
Date   : 12-1-2021
Aim    : ISBN number
Source : ansi c e7.14
*/
#include <stdio.h>

void main()
{
    int isbn[10] = {0,0,7,0,4,1,1,8,3,2};
    int sum = 0, check, i;

    // printf("Enter an ISBN number: ");

    for (i = 0; i < 9; i++)
    {
        sum += (i+1) * isbn[i];
    }
    check = sum % 11;
    if(check == isbn[9])
    {
        printf("\nGiven ISBN number is valid.");
    }
    else
    {
        printf("\nGiven ISBN number is not valid.");
    }
    
}