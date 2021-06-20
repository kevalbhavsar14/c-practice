/*
Date   : 7-2-2021
Aim    : reduce function
Source : brain
*/
#include <stdio.h>

// function: reduces given array into single value based on given function
// parameters: arr[]: array which we have to reduce
//             len: length of given array
//             (*fun)(int,int): function used to reduce given array
// returns: reduced value of the array based on function
int reduce(int arr[], int len, int (*fun)(int,int))
{
    int i, ans = arr[0];
    for (i = 1; i < len; i++)
    {
        ans = fun(ans, arr[i]);
    }
    return ans;
}

// function: operates on two variables
// parameters: a: a variable to be operated on
//             b: a variable to be operated on
// returns: result of operation
int op(int a, int b)
{
    return a ^ b;
}

void main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int), a, i;
    a = reduce(arr, n, op);
    printf("%d",a);
}