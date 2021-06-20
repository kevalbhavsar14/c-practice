/*
Date   : 12-1-2021
Aim    : Annual exam result of 100 students
Source : ansi c e7.5
*/
#include <stdio.h>

void main()
{
    int marks[10][3] = {{59,45,90},
                        {93,59,74},
                        {54,60,64},
                        {22,44,17},
                        {83,92,66},
                        {1,87,60},
                        {47,51,84},
                        {77,72,42},
                        {13,42,72},
                        {13,6,40}};
    int total[10];
    int i, j;
    int high_sub1 = 0, high_sub2 = 0, high_sub3 = 0, high_total = 0;
    int high_sub1_i = 0, high_sub2_i = 0, high_sub3_i = 0, high_total_i = 0;

    for(i = 0; i < 10; i++)
    {
        // printf("Enter marks of student no. %d: ", i+1);
        // scanf("%d%d%d", &marks[i][0], &marks[i][1], &marks[i][2]);
        total[i] = marks[i][0] + marks[i][1] + marks[i][2];

        if(marks[i][0] > high_sub1)
        {
            high_sub1 = marks[i][0];
            high_sub1_i = i;
        }
        if(marks[i][1] > high_sub2)
        {
            high_sub2 = marks[i][1];
            high_sub2_i = i;
        }
        if(marks[i][2] > high_sub3)
        {
            high_sub3 = marks[i][2];
            high_sub3_i = i;
        }
        if(total[i] > high_total)
        {
            high_total = total[i];
            high_total_i = i;
        }
    }

    printf("Roll no.   Subject 1   Subject 2   SUbject 3   Total\n");
    for(i = 0; i < 10; i++)
    {
        printf("%-10d %-11d %-11d %-11d %d\n", i+1, marks[i][0], marks[i][1], marks[i][2], total[i]);
    }
    printf("\nHighest    %-11d %-11d %-11d %d\n", high_sub1, high_sub2, high_sub3, high_total);
    printf("\nStudent who obtained highest marks in subject 1: %d", high_sub1_i+1);
    printf("\nStudent who obtained highest marks in subject 2: %d", high_sub2_i+1);
    printf("\nStudent who obtained highest marks in subject 3: %d", high_sub3_i+1);
    printf("\nStudent who obtained highest total marks: %d", high_total_i+1);
}