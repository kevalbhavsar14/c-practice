/*
Date   : 11-02-2021
Aim    : date structure
Source : ansi c e10.4 e 10.5  e 10.6
*/
#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct date readDate();
struct date update(struct date, int);
int validateDate(struct date);
int compareDate(struct date, struct date);
void printDate(struct date);
int leap(int);

void main()
{
    struct date d, d2;
    int n;
    printf("Enter day, month and year: ");
    d = readDate();
    if (validateDate(d))
    {
        printDate(d);
        printf("\nEnter number of days to be added: ");
        scanf("%d",&n);
        d2 = update(d, n);
        printf("Updated date: ");
        printDate(d2);
        printf("%d",compareDate(d, d2));
    }
    else
    {
        printf("Invalid date\n");
    }
}

// function: reads day, month and year
// returns: structure containing mentioned above
struct date readDate()
{
    struct date d;
    scanf("%d%d%d", &d.day, &d.month, &d.year);
    return d;
}

// function: adds given amount of days into the given date
// parameters: d: structure containing a date in the form of day, month and year
//             days: amount of days to be added into the given date
// returns: structure containing updated date
struct date update(struct date d, int days)
{
    int i;
    for (i = 0; i < days; i++)
    {
        if (d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12)
        {
            d.day = (d.day+1) % 32;
            d.day += !d.day;
        }
        else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11)
        {
            d.day = (d.day+1) % 31;
            d.day += !d.day;
        }
        else if (d.month == 2)
        {
            if (leap(d.year))
            {
                d.day = (d.day+1) % 30;
                d.day += !d.day;
            }
            else
            {
                d.day = (d.day+1) % 29;
                d.day += !d.day;
            }
        }
        if (d.day == 1)
        {
            d.month = ((d.month+1) % 12);
            d.month += !d.month;
            if (d.month == 1)
                d.year++;
        }
    }
    return d;
}

// function: validates given date to see if it exists or not
// parameters: d: structure containing a date in the form of day, month and year
// returns: 1 if the given date is valid
//          0 if the given date is not valid
int validateDate(struct date d)
{
    if (d.month <= 12)
    {
        if (d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12)
        {
            if (d.day <= 31)
                return 1;
        }
        else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11)
        {
            if (d.day <= 30)
                return 1;
        }
        else if (d.month == 2)
        {
            if (leap(d.year))
            {
                if (d.day <= 29)
                    return 1;
            }
            else
            {
                if (d.day <= 28)
                    return 1;
            }
        }
    }
    return 0;
}

int compareDate(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
    {
        return 1;
    }
    else if (d1.year == d2.year && d1.month < d2.month)
    {
        return 1;
    }
    else if (d1.month == d2.month && d1.day < d2.day)
    {
        return 1;
    }
    return 0;
}

// function: prints given date in "Month dd, yyyy" formate
// parameters: d: structure containing a date in the form of day, month and year
void printDate(struct date d)
{
    char name[12][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("%s %02d, %04d\n", name[d.month-1], d.day, d.year);
}

// function: checks whether given year is leap or not
// parameters: year: year integer which we have to check
// returns: 1 if the given year is leap
//          0 if the given year not is leap
int leap(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return 1;
    }
    return 0;
}