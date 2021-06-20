/*
Date   : 31-1-2021
Aim    : function to check whether gievn point lines inside the triangle
Source : let us c 5.j
*/
#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);
int isPointInside(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3);

void main()
{
    int x1=2, y1=3;
    int x2=0, y2=1;
    int x3=3, y3=1;
    int x=1, y=2;
    int a;
    a = isPointInside(x,y, x1,y1, x2,y2, x3,y3);
    printf("%d",a);
}

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a, b, c, s;
    a = distance(x1,y1, x2,y2);
    b = distance(x2,y2, x3,y3);
    c = distance(x3,y3, x1,y1);
    s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int isPointInside(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3)
{
    float A;
    A = area(x1,y1, x2,y2, x3,y3);
    if (A == 0)
    {
        return 0;
    }
    else if (distance(x,y, x1,y1) + distance(x,y, x2,y2) == distance(x1,y1, x2,y2))
    {
        return 0;
    }
    else if (distance(x,y, x2,y2) + distance(x,y, x3,y3) == distance(x2,y2, x3,y3))
    {
        return 0;
    }
    else if (distance(x,y, x1,y1) + distance(x,y, x3,y3) == distance(x3,y3, x1,y1))
    {
        return 0;
    }
    else if (area(x,y, x1,y1, x2,y2)+area(x,y, x2,y2, x3,y3)+area(x,y, x3,y3, x1,y1) > A)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}