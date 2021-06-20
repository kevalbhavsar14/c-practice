#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b)
{
    return *(int*)b - *(int*)a;
}

void main()
{
    int arr[] = {5, 2, 8, 6, 10, 7, 4};
    int n = sizeof(arr)/sizeof(int), i;
    qsort(arr, n, sizeof(int), compare);

    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}