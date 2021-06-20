/*
Date   : 17-1-2021
Aim    : student data
Source : ansi c e8.14
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char directory[2][8][10] = {{"Suresh","Ramesh","Kalpesh","Alpesh","Kesh","Chandresh","Paresh","Jignesh"},
                                {"110101","110102","110103","110104","110105","110106","110107","110108"}};
    char key[10];
    int i, l;

    printf("Enter student name or roll no. : ");
    gets(key);
    for(i = 0; i < 8; i++)
    {
        l = strlen(directory[0][i]);
        if(!strncmp(directory[0][i],key,l))
        {
            printf("\nStudent name     : %s",directory[0][i]);
            printf("\nStudent roll no. : %s",directory[1][i]);
        }
        else if(!strncmp(directory[1][i],key,6))
        {
            printf("\nStudent name     : %s",directory[0][i]);
            printf("\nStudent roll no. : %s",directory[1][i]);
        }
    }
}