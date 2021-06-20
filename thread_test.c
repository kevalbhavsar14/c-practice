/*
Date   : Date of creation
Aim    : Aim of the program
Source : Source of the program
*/
#include <stdio.h>
#include <Windows.h>
#include <unistd.h>
#include <conio.h>
#include <stdlib.h>

int c = 'a';
int exit_loop = 0;

DWORD WINAPI func(LPVOID param)
{
    while (!exit_loop)
    {
        c = getch();
        if (c == '0')
        {
            exit_loop = 1;
        }
    }
}

void main()
{
    DWORD ThreadId;
    HANDLE Threadhandle;

    Threadhandle = CreateThread(NULL, 0, func, 0, 0, &ThreadId);
    while (!exit_loop)
    {
        system("cls");
        printf("%c %d\n", c, c);
        usleep(1000);
    }
}
