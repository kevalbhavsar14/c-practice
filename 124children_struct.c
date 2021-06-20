/*
Date   : 11-2-2021
Aim    : children structure
Source : brain
*/
#include <stdio.h>
#include <string.h>

struct children3
{
    char name[10];
};
struct children2
{
    char name[10];
    struct children3 c;
};
struct children
{
    char name[10];
    struct children2 c[2];
};
struct Person
{
    char name[10];
    struct children c[3];
};

void print(struct Person);

void main()
{
    struct Person p = {"Rakesh",{"Aman",{"Akhil",{"Apurva"},""},"Akash",{"Asha","Nirasha"},"Amit"}};

    print(p);
}

void print(struct Person p)
{
    int i;
    printf("%s\n",p.name);
    for (i = 0; i < 3; i++)
        printf("%s is son of %s\n",p.c[i].name, p.name);
    printf("%s is son of %s\n", p.c[0].c[0].name, p.c[0].name);
    for (i = 0; i < 2; i++)
        printf("%s is daughter of %s\n", p.c[1].c[i].name, p.c[1].name);
    printf("%s is daughter of %s\n", p.c[0].c[0].c.name, p.c[0].c[0].name);
}