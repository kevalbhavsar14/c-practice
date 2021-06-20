/*
Date   : 6-3-2021
Aim    : copy file to another file also turning turning each lowercase alphabet to upper cas
Source : let us c 12.e
*/
#include <stdio.h>
#include <ctype.h>

void main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("c_files/myfile.txt","r");
    ft = fopen("c_files/myfile2.txt","w");
    while (1)
    {
        ch = fgetc(fs);
        if(ch == EOF)
            break;
        ch = toupper(ch);
        fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
}