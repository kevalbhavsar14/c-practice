/*
Date   : 11-1-2021
Aim    : city temperature
Source : ansi c e7.2
*/
#include <stdio.h>

void main()
{
    int temperature[7][5] = {{28,27,29,33,29},
                             {29,26,30,31,30},
                             {30,28,32,30,29},
                             {29,29,33,30,30},
                             {31,30,31,32,29},
                             {32,30,29,34,30},
                             {29,28,27,35,29}};
    int min, max, min_day, min_city, max_day, max_city;
    int i, j;
    
    min = temperature[0][0];
    max = temperature[0][0];
    for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(temperature[i][j] < min)
            {
                min = temperature[i][j];
                min_day = i+1;
                min_city = j+1;
            }
            if(temperature[i][j] > max)
            {
                max = temperature[i][j];
                max_day = i+1;
                max_city = j+1;
            }
        }
    }
    printf("Minimum temperature: day = %d  city = %d\n", min_day, min_city);
    printf("Maximun temperature: day = %d  city = %d\n", max_day, max_city);
}