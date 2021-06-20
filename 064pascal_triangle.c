/*
Date   : 11-12021
Aim    : pascal's triangle
Source : ansi c e7.4
*/
#include <stdio.h>

void main()
{
    int p[15][15];
    int i, j, n;

    printf("Enter number: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            printf("    ");
        }
        for(j = 0; j <= i; j++)
        {
            if(j == 0 || i == j)
            p[i][j] = 1;
            else
            p[i][j] = p[i-1][j-1] + p[i-1][j];
            printf("%4d    ",p[i][j]);
        }
        printf("\n");
    }
}