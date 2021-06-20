/*
Date   : 17-1-2021
Aim    : sort string in alphabetical order
Source : ansi c e8.5
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    int i, j, n, temp, largest = 0, largest_i;

    printf("Enter string:\n");
    gets(str);
    n = strlen(str);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            if(str[j] > largest)
            {
                largest = str[j];
                largest_i = j;
            }
        }
        temp = str[n-1-i];
        str[n-1-i] = str[largest_i];
        str[largest_i] = temp;
        largest = 0;
    }
    puts(str);
}