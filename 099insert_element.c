/*
Date   : 25-1-2021
Aim    : insert element in array at given index
Source : brain
*/
#include <stdio.h>

void inElement(int arr[], int element, int index)
{
    int i;
    for (i = 9; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}

void main()
{
    int arr[10] = {12,23,34,45,56,67,78,89,90};
    int i;
    inElement(arr, 99, 4);
    for (i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
}