/*
Date   : 6-3-2021
Aim    : append contents of one file to another
Source : let us c 12.c
*/
#include <stdio.h>

void main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("c_files/myfile.txt","a");
    ft = fopen("c_files/myfile2.txt","r");
    while (1)
    {
        ch = fgetc(ft);
        if(ch == EOF)
            break;
        fputc(ch, fs);
    }
    fclose(fs);
    fclose(ft);
}