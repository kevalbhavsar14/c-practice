/*
Date   : 22-1-2021
Aim    : matrix multiplication function
Source : ansi c e9.12
*/
#include <stdio.h>

void matrixMultiply(int m, int n, int (*A)[n], int (*B)[m]);
void printMatrix(int m, int n, int (*A)[m]);

void main()
{
    int A[2][4] = {{1,2,2,2},
                   {2,1,2,2}};
    int B[4][2] = {{1,2},
                   {2,1},
                   {2,2},
                   {2,2}};
    int m = 2, n = 4;
    matrixMultiply(m,n,A,B);
}

void matrixMultiply(int m, int n, int (*A)[n], int (*B)[m])
{
    int mul[m][m];
    int i, j, k;

    for(i = 0; i < m; i++)
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
    printMatrix(m,n,mul);
}

void printMatrix(int m, int n, int (*A)[m])
{
    int i,j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}