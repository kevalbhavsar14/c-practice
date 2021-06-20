/*
Date   : 9-2-2021
Aim    : distance between two points using structure
Source : brain
*/
#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
}Point;

float distance(Point p1, Point p2);

void main()
{
    Point p1, p2;
    p1.x = 1;
    p1.y = 1;
    p2.x = 1;
    p2.y = 2;
    float d = distance(p1, p2);
    printf("%f",d);
}

float distance(Point p1, Point p2)
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}