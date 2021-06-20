/*
Date   : 12-1-2021
Aim    : Addition and subtraction of matrices
Source : ansi c e7.15
*/
#include <stdio.h>

void main()
{
    int A[3][3];
    int B[3][3];
    int add[3][3], sub[3][3];
    int i, j;
    
    printf("Enter matrix A:\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d%d%d", &A[i][0], &A[i][1], &A[i][2]);
    }
    printf("Enter matrix B:\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d%d%d", &B[i][0], &B[i][1], &B[i][2]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            add[i][j] = A[i][j] + B[i][j];
            sub[i][j] = A[i][j] - B[i][j];
        }
        
    }
    printf("Addition of A and B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%-3d", add[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction of A and B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%-3d", sub[i][j]);
        }
        printf("\n");
    }
}