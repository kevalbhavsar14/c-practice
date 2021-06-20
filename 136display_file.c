/*
Date   : 6-3-2021
Aim    : read file and display its contents
Source : let us c 12.a
*/
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int ln = 2;
    fp = fopen("c_files/myfile.txt","rb");
    printf("1 | ");
    while(ch != EOF)
    {
        if (ch == '\n')
            printf("%d | ",ln++);
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
}