/*
Date   : 24-1-2021
Aim    : find character from a string
Source : ansi c e9.15
*/
#include <stdio.h>

// function: checks wether a specified character is in a string
// parameters: str: string to check the character
//             key: charcter to be checked
int find(char str[], char key)
{
    int i;
    for(i = 0; str[i] != 0; i++)
    {
        if (key == str[i])
        {
            return 1;
        }
    }
    return 0;
}

void main()
{
    char str[20] = "Hello world";
    int a = find(str, 'z');
    printf("%d",a);
}