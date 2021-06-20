/*
Date   : 11-2-2021
Aim    : student data using structures
Source : let us c 10.a
*/
#include <stdio.h>

struct Student
{
    int roll_no;
    int year;
    char name[20];
    char dept[20];
    char course[20];
};

void yearStudents(struct Student s[], int, int);
void studentData(struct Student s[], int, int);

void main()
{
    struct Student s[5] = {
        {110011, 2020,"Ramesh", "Computer", "C language"},
        {110012, 2020,"Suresh", "Computer", "Python"},
        {110013, 2021,"Jigesh", "Computer", "Java"},
        {110014, 2021,"Kalpesh", "IT", "Networking"},
        {110015, 2021,"Chandresh", "IT", "Database"}
    };
    int n = sizeof(s)/sizeof(s[0]);
    int y, r;
    
    printf("Enter year: ");
    scanf("%d",&y);
    yearStudents(s, y, n);
    
    printf("\nEnter roll no of a student: ");
    scanf("%d",&r);
    studentData(s, r, n);
}

void yearStudents(struct Student s[], int year, int n)
{
    int i, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i].year == year)
        {
            printf("%s\n",s[i].name);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("No data found\n");
    }
}

void studentData(struct Student s[], int roll, int n)
{
    int i, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i].roll_no == roll)
        {
            printf("Name: %s\n",s[i].name);
            printf("Department: %s\n",s[i].dept);
            printf("Course: %s\n",s[i].course);
            printf("Year of Joining: %d\n",s[i].year);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("No data found\n");
    }
}