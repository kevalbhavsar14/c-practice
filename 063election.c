/*
Date   : 11-1-2021
Aim    : count voting
Source : ansi c e7.3
*/
#include <stdio.h>

void main()
{
    int count[5] = {0,0,0,0,0};
    int n, spoilt = 0, i;

    printf("Enter candidate no. to vote for: \n");
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &n);
        count[n-1]++;
        if(n > 5)
        spoilt++;
    }
    for(i = 0; i < 5; i++)
    printf("\nVotes for candidate no. %d = %d", i+1, count[i]);
    printf("\nSpoilt ballots = %d", spoilt);
}