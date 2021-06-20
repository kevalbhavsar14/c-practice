/*
Date   : 21-1-2021
Aim    : function which turns lowercase characters to uppercase in a string
Source : ansi c e9.8
*/
#include <stdio.h>

void upper(char s[])
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
    }
    puts(s);
}

void main()
{
    char str[20];
    gets(str);
    upper(str);
}