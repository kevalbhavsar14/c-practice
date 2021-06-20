/*
Date   : 14-2-2021
Aim    : metric to british structures
Source : ansi c e10.11
*/
#include <stdio.h>

struct Metric
{
    int m;
    int cm;
};
struct British
{
    int ft;
    int in;
};

struct British mTOFt(struct Metric);

void main()
{
    struct Metric d1;
    struct British d2;
    d1.m = 2;
    d1.cm = 80;
    d2 = mTOFt(d1);
    printf("%d' %d\"",d2.ft,d2.in);
}

struct British mTOFt(struct Metric d1)
{
    struct British d2;
    float m = d1.m + d1.cm/100.0;
    d2.ft = (int)(m*3.281);
    // printf("%d\n", (int)(((m * 3.281) - d2.ft)*12));
    d2.in =  (int)(((m * 3.281) - d2.ft)*12);
    return d2;
}