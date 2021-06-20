/*
Date   : 11-1-2021
Aim    : Min and max out of array
Source : c patterns app
*/
#include <stdio.h>

void main()
{
    int arr[] = {18, 29, 36, 6, 92, 14, 46, 76, 34, 67};
    int min, max, i;

    max = arr[0];
    min = arr[0];
    for(i = 0; i < 10; i++)
    {
        if(arr[i] < min)
        min = arr[i];
        if(arr[i] > max)
        max = arr[i];
    }
    printf("\n%d", min);
    printf("\n%d", max);
}