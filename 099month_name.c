/*
Date   : 25-1-2021
Aim    : function which returns month name corrosponding to number passed in arguement
Source : ansi c e9.18
*/
#include <stdio.h>

char name[12][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

char* month(int m)
{
    return name[m-1];
}

void main()
{
    char *str;
    str = month(3);
    puts(str);
}