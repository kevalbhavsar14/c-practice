/*
Date   : 22-1-2021
Aim    : function to find largest value from m by n matrix
Source : ansi c e9.11
*/
#include <stdio.h>
#define M 3
#define N 4

int largeM(int m[][N])
{
    int largest = 0, i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (m[i][j] > largest)
            {
                largest = m[i][j];
            }
        }
    }
    return largest;
}

void main()
{
    int matrix[M][N] = {{12,24,7,11},
                        {16,9,21,13},
                        {6,23,22,19}};
    int biggest;
    biggest = largeM(matrix);
    printf("Largest element of matrix: %d",biggest);
}