/*
Date   : 23-2-2021
Aim    : Aim of the program
Source : Source of the program
*/
#include <stdio.h>
#include <stdlib.h>
#include "print_bits.c"

struct DateTime
{
    int date;
    int time;
};

struct DateTime* createDateTime(int, int, int, int, int, int);
void printDateTime(struct DateTime*); 

void main()
{
    struct DateTime* d1 = createDateTime(2020, 12, 31, 23, 59, 59);
    printDateTime(d1);
    printBits(&(d1->date), 4);
    printBits(&(d1->time), 4);
}

struct DateTime* createDateTime(int y, int m, int d, int h, int mi, int s)
{
    struct DateTime* d1 = (struct DateTime*)malloc(sizeof(struct DateTime));
    d1->date = (y<<16) | (m<<8) | d;
    d1->time = (h<<16) | (mi<<8) | s;
    return d1;
}

void printDateTime(struct DateTime* d)
{
    printf("Date: %02d - %02d - %04d\n", d->date & 255, (d->date>>8) & 255, d->date>>16);
    printf("Time: %02d:%02d:%02d\n", d->time & 255, (d->time>>8) & 255, d->time>>16);
}