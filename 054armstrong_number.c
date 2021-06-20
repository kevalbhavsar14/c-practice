#include <stdio.h>

void main()
{
    int n, sum, i;

    for(i = 300; i <= 400; i++)
    {
        n = i;
        sum = 0;
        while(n)
        {
            sum += (n % 10) * (n % 10) * (n % 10);
            n /= 10;
        }
        if(sum == i)
        {
            printf("%d\n", i);
        }
    }
}