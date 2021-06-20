/*
Date   : 12-1-2021
Aim    : Find length of given character string
Source : ansi c e7.11
*/
#include <stdio.h>

void main()
{
    char str[20];
    int length = 0, i;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("length = %d", length);
}