/*
Date   : 16-1-2021
Aim    : ASCII list of name
Source : ansi c e8.1
*/
#include <stdio.h>

void main()
{
    char name[] = "Keval Bhavsar";
    int i;

    for(i = 0; name[i] != '\0'; i++)
    {
        printf("%d ",name[i]);
    }
}