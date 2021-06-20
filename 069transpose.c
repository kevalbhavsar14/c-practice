/*
Date   : 12-1-2021
Aim    : Print transpose of matrix
Source : ansi c e7.13
*/
#include <stdio.h>

void main()
{
    int matrix[3][4] = {{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12}};
    int m=3, n=4, i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%-3d",matrix[j][i]);
        }
        printf("\n");
    }
}