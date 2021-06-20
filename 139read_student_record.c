/*
Date   : 6-3-2021
Aim    : read student record from file
Source : let us c 12.d
*/
#include <stdio.h>

typedef struct
{
    char name[15];
    int age;
} student_record;

void sort(student_record s[], int n, int (*compare)(const student_record*, const student_record*));
int compareName(const student_record *s1, const student_record *s2);
void printStudentRecord(student_record s[], int n);

void main()
{
    student_record s[5];
    FILE *fp;
    int i;
    fp = fopen("c_files/student_record.txt","r");
    for (i = 0; i < 5; i++)
    {
        fscanf(fp,"%s %d", &s[i].name, &s[i].age);
    }
    sort(s, 5, compareName);
    printStudentRecord(s, 5);
}

void sort(student_record s[], int n, int (*compare)(const student_record*, const student_record*))
{
    student_record temp;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (compare(&s[j], &s[j+1]))
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

int compareName(const student_record *s1, const student_record *s2)
{
    if (s1->name[0] > s2->name[0])
    {
        return 1;
    }
    return 0;
}

void printStudentRecord(student_record s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
    }
}