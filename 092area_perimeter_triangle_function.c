/*
Date   : 21-1-2021
Aim    : area or perimeter of triangle using functions
Source : ansi c e9.10
*/
#include <stdio.h>
#include <math.h>

float areaTriangle(int a, int b, int c)
{
    float area, s;
    s = (a+b+c) / 2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int perimeterTriangle(int a, int b, int c)
{
    int p;
    p = a+b+c;
    return p;
}

void main()
{
    int a, b, c;
    float ans;
    char choice;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Enter A for area or P for perimeter: ");
    fflush(stdin);
    choice = getchar();

    switch (choice)
    {
    case 'A':
        ans = areaTriangle(a,b,c);
        printf("\nArea = %.2f", ans);
        break;
    
    case 'P':
        ans = perimeterTriangle(a,b,c);
        printf("\nPerimeter = %d", (int)ans);
        break;

    default:
        printf("\nInvalid choice");
        break;
    }
}