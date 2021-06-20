/*
Date   : 20-1-2021
Aim    : multiple function call combination
Source : brain
*/
#include <stdio.h>

void a();
void b();
void c();
void d();

void main()
{
    printf("\nEnter function: main");
    a();
    d();
    printf("\nExit function: main");
}

void a()
{
    printf("\nEnter function: a");
    b();
    c();
    printf("\nExit function: a");
}

void b()
{
    printf("\nEnter function: b");
    printf("\nExit function: b");
}

void c()
{
    printf("\nEnter function: c");
    printf("\nExit function: c");
}

void d()
{
    printf("\nEnter function: d");
    a();
    printf("\nExit function: d");
}