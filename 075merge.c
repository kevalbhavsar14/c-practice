/*
Date   : 16-1-2021
Aim    : Merge sorted arrays
Source : ansi c e7.6
*/
#include <stdio.h>
#define N 5
#define M 7
void main()
{
    int A[N] = {1,4,5,8,9};
    int B[M] = {2,3,5,6,7,10,11};
    int C[N+M];
    int i, ai = 0, bi = 0;

    for(i = 0; i < N+M; i++)
    {
        if(ai < N && bi < M)
        {
            if(A[ai] < B[bi])
            {
                C[i] = A[ai++];
            }
            else
            {
                C[i] = B[bi++];
            }
        }
        else if(ai = N)
        {
            C[i] = B[bi++];
        }
        else
        {
            C[i] = A[ai++];
        }
        
    }
    for(i = 0; i < N+M; i++)
    {
        printf("%d ",C[i]);
    }
}