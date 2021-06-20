/*
Date   : 22-2-2021
Aim    : pointer casting
Source : Source of the program
*/
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

void main()
{
    float a = 12.34f, c;
    int b = 1234, d;
    float *p;
    int *q;
    void *r = &a;
    c = *(float*)r;
    d = *(int*)r;
    printf("a = %f\n",a);
    printf("c = %f\n",c);
    printf("d = %d\n",d);
    printf("a bits =\n");
    printBits(&a, sizeof(a));
    printf("c bits =\n");
    printBits(&c, sizeof(c));
    printf("d bits =\n");
    printBits(&d, sizeof(d));
}