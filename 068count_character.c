/*
Date   : 12-1-2021
Aim    : Find number of occurence of a specified character
Source : ansi c e7.12
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    char c;
    int l, count, i;

    printf("Enter string: ");
    gets(str);
    printf("Enter character: ");
    c = getchar();
    l = strlen(str);

    for(i=0; i<l; i++)
    {
        if(c >= 65 && c <= 90)
        {
            if(c == str[i] || c+32 == str[i])
            {
                count++;
            }
        }
        else if(c >= 97 && c <= 122)
        {
            if(c == str[i] || c-32 == str[i])
            {
                count++;
            }
        }
        else
        {
            if(c == str[i])
            {
                count++;
            }
        }
        
        
    }
    printf("\nNumber of occurunces = %d", count);
}