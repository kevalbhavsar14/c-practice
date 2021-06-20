/*
Date   : 13-1-2021
Aim    : slection sorting of array
Source : ansi c e7.9
*/
#include <stdio.h>

void main()
{
    int arr[15] = {3,15,8,21,17,6,11,19,20,4,9,17,12,14,5};
    int i, j, n = 15, temp, largest = 0, largest_i;

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
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}