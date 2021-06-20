/*
Date   : 7-3-2021
Aim    : encrypt file using ofset cipher
Source : let us c 12.h
*/
#include <stdio.h>

void main()
{
    FILE *fo, *fen;
    char ch;
    fo = fopen("c_files/myfile.txt","r");
    fen = fopen("c_files/myfile_encrypted.txt","w");
    if(fo == NULL)
    {
        printf("Cant open file");
        return;
    }
    if(fen == NULL)
    {
        printf("Cant open file");
        return;
    }

    while ((ch = fgetc(fo)) != EOF)
    {
        fputc(ch+128, fen);
    }
    
}