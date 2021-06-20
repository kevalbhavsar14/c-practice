/*
Date   : 24-1-2021
Aim    : insert one string into another after m'th index
Source : anci c e9.17
*/
#include <stdio.h>
#include <string.h>

// function: insterts s2 into s1 after m index
// parameters: s1: string in which s2 will be insterted after m index
//             s2: string which will be inserted in s1 after m index
//             m: index number after which s2 will be inserted in s1
// blame the book for the function name.
void locate(char s1[], char s2[], int m)
{
    int i, l1, l2;
    l1 = strlen(s1);
    l2 = strlen(s2);
    for (i = l1; i > m; i--)
    {
        s1[i+l2] = s1[i];
    }
    for(i = 0; i < l2; i++)
    {   
        s1[i+(m+1)] = s2[i];
    }
}

void main()
{
    char s1[20] = "Hello world";
    char s2[20] = " 2 U";
    locate(s1,s2,3);
    puts(s1);
}