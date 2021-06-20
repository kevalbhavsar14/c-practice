/*
Date   : 17-1-2021
Aim    : sales record
Source : ansi c e8.7
*/
#include <stdio.h>

void main()
{
    char record[4][3][20];
    char month;
    int i, j;

    for(i = 0; i < 4; i++)
    {
        printf("Enter Vehical type: ");
        gets(record[i][0]);
        printf("Enter Month of sales: ");
        gets(record[i][1]);
        printf("Enter Price: ");
        gets(record[i][2]);
    }
    printf("\nEnter month to see the cars sold in that month:\n");
    scanf("%c", &month);
    printf("\nVehical type    Price");
    for(i = 0; i < 4; i++)
    {
        if(month == record[i][1][4])
        {
            printf("\n%-15s %s", record[i][0], record[i][2]);
        }
    }
}