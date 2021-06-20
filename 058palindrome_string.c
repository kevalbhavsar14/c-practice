/*
Date   : 8-1-2021
Aim    : check wether a string is palindrome
Source : c patterns app
*/
#include <stdio.h>
#include <string.h>


void main()
{
    char str[50], str2[50];
    int l, i, a = 0, flag = 0;
    printf("Enter string: ");
    scanf("%s",str);

    l = strlen(str);
    for(i = l; i > 0; i--)
    {
        str2[a] = str[i - 1];
        a++;
    }
    str2[l] = 0;
    for(i = 0; i < l; i++)
    {
        if(str[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    printf("\nString is not palindrome");
    else
    printf("\nString is palindrome");
}