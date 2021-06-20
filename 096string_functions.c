/*
Date   : 24-1-2021
Aim    : string functions
Source : ansi c e9.15
*/
#include <stdio.h>
#include <string.h>

// function: copies first string into the second string
// parameters: str1: string to be copied
//             str2: where str1 is being copied
void copystr(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}

// function: compares two strings character by character
// operation: index by index equality check
// parameters: str1: string to be compared
//             str2: string to compare with 
// return: if same returns  0, if different returns 1
int cmpstr(char str1[], char str2[])
{
    int i, l1, l2, n;
    
    l1 = strlen(str1);
    l2 = strlen(str2);

    if (l1 > l2)
    {
        n = l1;
    }
    else
    {
        n = l2;
    }

    for (i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            return 1;
        }
    }
    return 0;
}

// function: concatnates first and second string to third
// parameters: str1: first string to be concatnated
//             str2: second string to be concatnated
//             concate: where str1 and str2 are being concatnated
void concat(char str1[], char str2[], char concat[])
{
    int i, ci = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        concat[ci++] = str1[i];
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        concat[ci++] = str2[i];
    }
    concat[ci] = '\0';
}

void main()
{
    char str1[20] = "Hello world";
    char str2[20];
    char str_cat[50];
    int a;

    copystr(str1,str2);
    puts(str2);

    str2[4] = 0;
    a = cmpstr(str1,str2);
    printf("a = %d\n",a);

    concat(str1,str2,str_cat);
    puts(str_cat);
}