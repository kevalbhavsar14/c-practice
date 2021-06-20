/*
Date   : 18-2-2021
Aim    : student record structure
Source : ansi c e10.15
*/
#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
struct student_record
{
    char name[15];
    struct date dob;
    int marks;
};

void readStudentData(struct student_record[], int);
void printStudentData(const struct student_record[], int);
void sort(struct student_record[], int, int (*compare)(const struct student_record*, const struct student_record*));
int compare(const struct student_record*, const struct student_record*);

void main()
{
    struct student_record student[10];
    int n = 10;
    readStudentData(student, n);
    sort(student, n, compare);
    printf("\nSorted by rank:\n");
    printStudentData(student, n);
}

void readStudentData(struct student_record student[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter %dth student name: ",i+1);
        fflush(stdin);
        gets(student[i].name);
        printf("Enter %dth student Date of birth: ",i+1);
        fflush(stdin);
        scanf("%d%d%d", &student[i].dob.day, &student[i].dob.month, &student[i].dob.year);
        printf("Enter %dth student total marks: ",i+1);
        fflush(stdin);
        scanf("%d", &student[i].marks);
    }
}

void printStudentData(const struct student_record student[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nStudent name: %s\n",student[i].name);
        printf("Student date of birth: %02d-%02d-%04d\n", student[i].dob.day, student[i].dob.month, student[i].dob.year);
        printf("Student total marks: %d\n", student[i].marks);
        printf("Rank: %d\n", i+1);
    }
}

void sort(struct student_record s[], int n, int (*compare)(const struct student_record*, const struct student_record*))
{
    struct student_record temp;
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

int compare(const struct student_record *s1, const struct student_record *s2)
{
    if (s1->marks < s2->marks)
    {
        return 1;
    }
    return 0;
}