/*
Date   : 14-4-2021
Aim    : word guessing game
Source : Source of the program
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void printJumbled(char *word);

void main()
{
    char words[][10] =
    {
        "recycle",
        "pumpkin",
        "seasonal",
        "accident",
        "bottle",
        "horizon",
        "science",
        "solution",
        "fashion",
        "feature",
        "translate",
        "timetable",
        "conductor",
        "sketch",
        "resident",
        "honest",
        "surprise",
        "parallel",
        "diagram",
        "character"
    };
    int word_count = 20;
    int exit = 0;
    char *picked, guessed[10], play_again;

    srand(time(0));
    while(!exit)
    {
        picked = words[rand() % word_count];
        printf("\nGuess the word!");
        printf("\nJumbled word: ");
        printJumbled(picked);
        printf("\nYour guess: ");
        fflush(stdin);
        gets(guessed);
        // printf("\n%s %s", guessed, picked);
        // scanf("%s", guessed);

        if (!strcmp(picked, guessed))
        {
            printf("\nYour guess is correct!");
        }
        else
        {
            printf("\nYour guess is incorrect!");
            printf("\nCorrect word was: %s", picked);
        }

        printf("\n\nWould you like to play again?");
        printf("\n(press Y to play again, any other key to exit)\n");
        play_again = getch();
        if (!(play_again == 'Y' || play_again == 'y'))
        {
            exit = 1;
        }
    }
}

void printJumbled(char *word)
{
    char *jumbled;
    strcpy(jumbled, word);
    int len = strlen(word);
    int index1, index2;
    char temp;

    for (int i = 0; i < rand() % len + len; i++)
    {
        index1 = rand() % len;
        index2 = rand() % len;

        temp = jumbled[index1];
        jumbled[index1] = jumbled[index2];
        jumbled[index2] = temp;
    }
    printf("%s", jumbled);
}
