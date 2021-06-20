/*
Date   : 16-1-2021
Aim    : Binary search in array
Source : ansi c e7.10
*/
#include <stdio.h>

void main()
{
    int arr[10] = {12,23,34,45,56,67,78,89,91,99};
    int key = 12, low = 0, high = 9, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            printf("%d", mid);
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}