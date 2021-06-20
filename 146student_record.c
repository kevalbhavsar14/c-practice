/*
Date   : 12-3-2021
Aim    : student record transaction
Source : let us c 12.m
*/
#include <stdio.h>

typedef struct
{
    int roll_no;
    char name[30];
} student;

typedef struct
{
    int roll_no;
    char type;
} transaction;

void main()
{
    FILE *student_f, *trans_f, *updated_f;
    student s;
    transaction t;

    student_f = fopen("c_files/146students.txt","r");
    trans_f = fopen("c_files/146transaction.txt","r");
    updated_f = fopen("c_files/146updated.txt","w");

    if (!student_f)
    {
        printf("Can't open file\n");
    }
    if (!trans_f)
    {
        printf("Can't open file\n");
    }
    if (!updated_f)
    {
        printf("Can't open file\n");
    }

    while (!feof(student_f))
    {
        // printf("yes\n");
        fscanf(student_f, "%d%*c%[^\n]", &s.roll_no, &s.name);
        fscanf(trans_f, "%d%*c%c", &t.roll_no, &t.type);
        
        if (t.type == 'A')
        {
            fprintf(updated_f, "%d,%s\n", s.roll_no, s.name);
        }
    }

    fclose(student_f);
    fclose(trans_f);
    fclose(updated_f);
}