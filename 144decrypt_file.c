/*
Date   : 7-3-2021
Aim    : decrypt file using ofset cipher
Source : let us c 12.h
*/
#include <stdio.h>

void main()
{
    FILE *fen;
    char ch;
    fen = fopen("c_files/myfile_encrypted.txt","r");
    if(fen == NULL)
    {
        printf("Cant open file");
        return;
    }

    while ((ch = fgetc(fen)) != EOF)
    {
        putchar(ch-128);
    }
    
}