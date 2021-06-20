#include <stdio.h>

void printBits(void *p, int bytes)
{
    int i, j, n;
    for (i = bytes-1; i >= 0; i--)
    {
        for (j = 7; j >= 0; j--)
        {
            n =*(char*)(p+i)&(1<<j) ? 1 : 0;
            printf("%d",n);
        }
        printf(" ");
    }
    printf("\n");
}