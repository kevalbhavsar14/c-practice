/*
Date   : 13-1-2021
Aim    : matrix multiplication
Source : ansi c e7.7
*/
#include <stdio.h>

void main()
{
    int A[3][3] = {{1,2,2},
                   {2,1,2},
                   {2,2,1}};
    int B[3][3] = {{1,2,2},
                   {2,1,2},
                   {2,2,1}};
    int mul[3][3];
    int i, j, k, n=3;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for(k = 0; k < n; k++)
            {
                mul[i][j] += A[j][k] * B[k][i];
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}