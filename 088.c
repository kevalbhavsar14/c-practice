/*
Date   : 21-1-2021
Aim    : 
Source : 
*/
#include <stdio.h>

// void op(int a, int b, int* s, int* d) {
//     s = a+b;
//     d = a-b;
//     printf("%d %d\n", s, d);
// }

void main()
{
    // int a = 10, b = 20;
    // int s, d;
    
    // op(a, b, &s, &d);
    // printf("%d %d", s, d);

    int* c, *b;
    int a = 50;
    int* p = &a;
    c = &a;
    b = c+1;
    printf("%d %d\n", &a, *p);


}