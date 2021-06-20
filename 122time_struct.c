/*
Date   : 11-2-2021
Aim    : time_struct structure
Source : ansi c e10.1 e10.2 e10.3
*/
#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int second;
};

struct time_struct readTime();
void printTime(struct time_struct);
struct time_struct update(struct time_struct);

void main()
{
    struct time_struct t;
    printf("Enter hours, minutes and seconds: ");
    t = readTime();
    t = update(t);
    printf("Updated Time: ");
    printTime(t);
    // printf("\n%d", 60%60);
}

// function: reads hours, minutes and seconds
// returns: structure containing all 3 values mentioned above
struct time_struct readTime()
{
    struct time_struct t;
    scanf("%d%d%d", &t.hour, &t.minute, &t.second);
    return t;
}

// function: prints time in hh:mm:ss format
// parameters: t: stucture containing hours, minutes and seconds which is to be printed
void printTime(struct time_struct t)
{
    printf("%02d:%02d:%02d",t.hour, t.minute, t.second);
}

// function: increments given time by 1 second
// parameters: t: stucture containing hours, minutes and seconds which is to be printed
// returns: structure containing all 3 values mentioned above
struct time_struct update(struct time_struct t)
{
    t.second = (t.second+1) % 60;
    if (t.second == 0)
        t.minute = ((t.minute+1) % 60);
    if (t.minute == 0)
        t.hour = ((t.hour+1) % 24);
    return t;
}