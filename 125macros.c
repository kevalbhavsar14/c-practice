/*
Date   : 13-2-2021
Aim    : macros
Source : let us c 7.a
*/
#include <stdio.h>
#define IFLOWER(c) if(c>='a'&&c<='z')printf("Character is lower case\n");\
                   else printf("Character is not lower case\n");
#define IFUPPER(c) if(c>='A'&&c<='Z')printf("Character is upper case\n");\
                   else printf("Character is not upper case\n");
#define IFALPHA(c) if(c>='a'&&c<='z'||c>='A'&&c<='Z')printf("Character is a Alphabet\n");\
                   else printf("Character is not not a alphabet\n");
#define BIGGER(a,b) if(a>b)printf("%d is bigger\n",a);\
                    else if(b>a)printf("%d is bigger\n",b);\
                    else printf("Both are equal\n");
void main()
{
    // IFLOWER('A');
    // IFUPPER('A');
    // IFALPHA('A');
    BIGGER(7,7);
}