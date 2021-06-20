#include <stdio.h>
#include <math.h>

void main()
{
    int i;
    float n;

    for(i = 1; i <= 100; i++)
    {
        n = sqrt(i + 1);
        if(n == (int)n)
        printf("%d\n",i);
    }
}