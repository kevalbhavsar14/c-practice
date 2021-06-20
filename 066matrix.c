/*
Date   : 12-1-2021
Aim    : matrix pattern
Source : ansi c e7.8
*/
#include <stdio.h>

void printMatrix(int m[][5]) {
    int i, j;
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            printf("%+2d ", m[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int m[5][5];
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(j < 5-i-1)
            {
                m[i][j] = 1;
            }
            else if (j > 5-i-1)
            {
                m[i][j] = -1;
            }
            else
            {
                m[i][j] = 0;
            }
        }
    }
    printMatrix(m);
}