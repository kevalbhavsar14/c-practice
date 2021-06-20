/*
Date   : 7-3-2021
Aim    : display contents of a text file on screen
Source : let us c 12.g
*/
#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    int ch;
    int i = 0, j = 0;

    printf("%x %x %x\n", &ch, &i, &j);

    fp = fopen("c_files/myfile.txt","r");
    if (fp == NULL)
    {
        printf("Cant open file");
        return;
    }

    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    puts("myfile.txt");
    fseek(fp, 0, SEEK_SET);

    // while (j < 80) {
    //     putchar('-');
    //     j++;
    // }
    // putchar('\n');
    // while (i < 21) {
    //     j = 1;
    //     putchar('|');
    //     while (!feof(fp) && (ch = fgetc(fp)) != '\n') {
    //         // printf("%d",ch);
    //         putchar(ch);
    //         j++;
    //     }
    //     while (j < 79) {
    //         putchar(' ');
    //         j++;
    //     }
    //     putchar('|');
    //     putchar('\n');
    //     i++;
    // }
    // j=0;
    // while (j < 80) {
    //     putchar('-');
    //     j++;
    // }
    // putchar('\n');

    for (i = 0; i < 80; i++)
    {
        putchar('-');
    }
    putchar('\n');
    for (i = 0; i < 21; i++)
    {
        j = 1;
        putchar('|');
        while (!feof(fp) && (ch = fgetc(fp)) != '\n')
        {
            putchar(ch);
            j++;
        }
        while (j < 79)
        {
            putchar(' ');
            j++;
        }
        printf("|\n");
    }
    for (i = 0; i < 80; i++)
    {
        putchar('-');
    }
    fclose(fp);
}