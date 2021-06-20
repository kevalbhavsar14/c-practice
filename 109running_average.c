/*
Date   : 29-1-2021
Aim    : running average using recursion
Source : let us c 5.e
*/
#include <stdio.h>

// function: print running average of given array
// parameters: arr[]: array to find running average of
//             n: amount of elements
// returns: average of n elements
// recursive
float runningavg(int arr[], int n)
{
    float avg;
    if (n == 1)
    {
        printf("%.1f ",(float)arr[n-1]);
        return arr[n-1];
    }
    else
    {
        avg = (runningavg(arr,n-1)*(n-1) + arr[n-1]) / n;
        printf("%.1f ",avg);
        return avg;
    }
}

void main()
{
    int arr[10] = {2,4,7,10,13,16,19,22,25,28};
    runningavg(arr, 10);
}