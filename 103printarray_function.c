/*
Date   : 26-1-2021
Aim    : printarray function
Source : Source
*/
#include <stdio.h>

// function: prints values of elements of given array
// parameters: arr: array which we have to print
//             n: first element to be printed
//             size: size of given array
// recursive
void printarray(int arr[], int n, int size)
{
    if(n < size)
    {
        printf("%d ",arr[n]);
        printarray(arr, n+1, size);
    }
}

// function: prints values of elements of given array in reverse order
// parameters: arr: array which we have to print
//             n: last element of array to be printed, prints first
// recursive
void printarrayrev(int arr[], int n)
{
    if(n >= 0)
    {
        printf("%d ",arr[n]);
        printarrayrev(arr, n-1);
    }
}

void main()
{
    int arr[10] = {01,12,23,34,45,56,67,78,89,90};
    printarray(arr, 0, 10);
    printf("\n");
    printarrayrev(arr, 9);
}