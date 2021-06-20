/*
Date   : 8-2-2021
Aim    : filter function
Source : brain
*/
#include <stdio.h>
#include <stdlib.h>

// function: filters given array elements based on given function to new array
// parameters: arr[]: array which we have to filter
//             len: length of the array to be filtered
//             (*fun)(int): function used to filter array
//             arr2: address of array where filtered array will be stored
//                   output parameter
//             len2: address of variable for length of filtered array
//                   output parameter
// returns: filtered array
void filter(int arr[], int len, int (*fun)(int), int** arr2, int* len2)
{
    int i, i2 = 0;
    *len2 = 0;
    for (i = 0; i < len; i++)
    {
        if (fun(arr[i]))
        {
            *len2 = *len2 + 1;
        }
    }
    *arr2 = (int*)malloc(*len2 * sizeof(int));
    for (i = 0; i < len; i++)
    {
        if (fun(arr[i]))
        {
            *(*arr2+i2) = arr[i];
            i2++;
        }
    }
}

int fun(int a)
{
    if (a%2)
    {
        return 1;
    }
    return 0;
}

void main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int), i, m = 0;
    int* arr2;
    filter(arr, n, fun, &arr2, &m);
    for (i = 0; i < m; i++)
    {
        printf("%d ",arr2[i]);
    }
}