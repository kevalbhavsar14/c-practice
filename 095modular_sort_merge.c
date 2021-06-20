/*
Date   : 22-1-2021
Aim    : functions for sorting and merging arrays
Source : ansi c e9.14
*/
#include <stdio.h>
#include <stdlib.h>

void readArr(int* arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int* sortArr(int *a, int n)
{
    int i, j, temp, largest = 0, largest_i;
    int* arr = (int*)malloc(n * sizeof(int));
    
    for(i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            if(arr[j] > largest)
            {
                largest = arr[j];
                largest_i = j;
            }
        }
        temp = arr[n-1-i];
        arr[n-1-i] = arr[largest_i];
        arr[largest_i] = temp;
        largest = 0;
    }
    return arr;
}

int* mergeArr(int *A, int m, int *B, int n)
{
    int i, ai = 0, bi = 0;
    int *C = (int*)malloc(m+n * sizeof(int));

    for(i = 0; i < m+n; i++)
    {
        if(ai < m && bi < n)
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
        else if(ai = m)
        {
            C[i] = B[bi++];
        }
        else
        {
            C[i] = A[ai++];
        }
    }
    return C;
}

void printArr(int *arr,int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main()
{
    int m, n;
    int *A, *temp_A;
    int *B, *temp_B;
    int *C;

    printf("Enter size of A: ");
    scanf("%d",&m);
    A = (int*)malloc(m * sizeof(int));
    
    printf("Enter elements of A:\n");
    readArr(A, m);
    
    printf("Enter size of B: ");
    scanf("%d",&n);
    B = (int*)malloc(n * sizeof(int));
    
    printf("Enter elements of B:\n");
    readArr(B, n);

    temp_A = sortArr(A,m);
    temp_B = sortArr(B,n);

    C = mergeArr(temp_A,m,temp_B,n);
    
    printArr(A,m);
    printArr(temp_A,m);
    printArr(B,n);
    printArr(temp_B,n);
    printArr(C,m+n);
}