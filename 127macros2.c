/*
Date   : 14-2-2021
Aim    : macros
Source : let us c 7.c
*/
#include <stdio.h>
#define MEAN(a,b) (a+b)/2.0
#define ABSOLUTE(x) (x>0)?(x):(-x)
#define LOWER(c) (c>='A'&&c<='Z')?(c+32):(c)
#define BIGGER(a,b) (a>b)?(a):(b)

void main()
{
    int a, b;
    char c;
    scanf("%d%d",&a,&b);
    printf("Mean = %.1f\n",MEAN(a,b));
    printf("Absolute a = %d, b = %d\n",ABSOLUTE(a),ABSOLUTE(b));
    printf("Bigger = %d\n\n",BIGGER(a,b));
    fflush(stdin);
    scanf("%c",&c);
    printf("%c",LOWER(c));
}