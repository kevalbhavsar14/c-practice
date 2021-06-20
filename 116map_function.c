/*
Date   : 7-2-2021
Aim    : map function
Source : brain
*/
#include <stdio.h>
#include <stdlib.h>

// function: applies given function to all elements of given array
// parameters: arr[]: array which we have to apply function to
//             len: length of given array
//             (*fun)(int): function which we have to apply to the given array
// returns: new array with given function applied to original array
int* map(int arr[], int len, int (*fun)(int))
{
    int i;
    int* arr2 = (int*)malloc(len * sizeof(int));
    for (i = 0; i < len; i++)
    {
        arr2[i] = fun(arr[i]);
    }
    return arr2;
}

// function: squares a given number
// parameters: a: number which we have to square
// returns: the square of the given number
int sqr(int a)
{
    return a*a;
}

void main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int), i;
    int* arr2 = map(arr, n, sqr);
    
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr2[i]);
    }
}