/*
Date   : 6-3-2021
Aim    : display file size
Source : let us c 12.b
*/
#include <stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("c_files/myfile.txt","r");
    fseek(fp, 0, SEEK_END);
    printf("File size = %ld bytes\n",ftell(fp));
    fclose(fp);
}