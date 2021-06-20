/*
Date   : 6-3-2021
Aim    : merge lines atlernately from two files into third file
Source : let us c 12.f
*/
#include <stdio.h>
#include <string.h>

void main()
{
    FILE *f1, *f2, *f3;
    char s[50];
    f1 = fopen("c_files/myfile.txt","r");
    f2 = fopen("c_files/myfile2.txt","r");
    f3 = fopen("c_files/mergedfile.txt","w");
    while (fgets(s, 50, f1) != NULL)
    {
        fputs(s, f3);
        fgets(s, 50, f2);
        fputs(s, f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}