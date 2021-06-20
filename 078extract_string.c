/*
Date   : 16-1-2021
Aim    : Extract and print a portion from a string
Source : ansi c e8.3
*/
#include <stdio.h>

void main()
{
    char str[20];
    int m, n, i;
    
    printf("Enter string: ");
    gets(str);
    printf("Enter amount of characters: ");
    scanf("%d",&m);
    printf("Enter number of character to start from: ");
    scanf("%d",&n);

    for(i = n-1; i < m+n-1 && str[i] != '\0'; i++)
    {
        printf("%c",str[i]);
    }
}