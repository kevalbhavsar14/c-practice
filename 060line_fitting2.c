/*
Date   : 11-1-2021
Aim    : line fitting 2
Source : ansi c e7.1
*/
#include <stdio.h>

void main()
{
    int points[15][2];
    //int x, y;
    float m, c;
    int sum_xy = 0, sum_x = 0, sum_y = 0, sum_x2 = 0;
    int i, n;

    printf("Enter amount of points: ");
    scanf("%d", &n);
    printf("Enter points(x,y): \n");
    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("(%d,%d)", &points[i][0], &points[i][1]);
        sum_xy += points[i][0] * points[i][1];
        sum_x += points[i][0];
        sum_y += points[i][1];
        sum_x2 += points[i][0] * points[i][0];
    }
    m = ((float)n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x*sum_x);
    c = (sum_y - m * sum_x) / 7;
    printf("y = %fx + %f", m, c);
}