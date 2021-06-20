/*
Date   : 12-3-2021
Aim    : delete word "a", "an" and "the" from text file into new text file
Source : let us c 12.o
*/
#include <stdio.h>
#include <string.h>

void main()
{
    FILE *original_f, *updated_f;
    char word[20];

    original_f = fopen("c_files/147original.txt","r");
    updated_f = fopen("c_files/147updated.txt","w");

    while (!feof(original_f))
    {
        fscanf(original_f, "%s", word);
        if (!strcmp(word, "a") || !strcmp(word, "A") || !strcmp(word, "an") || !strcmp(word, "An") || !strcmp(word, "the") || !strcmp(word, "The"))
        {
            fprintf(updated_f, " ");
        }
        else
        {
            fprintf(updated_f, "%s ", word);
        }
    }
    fclose(original_f);
    fclose(updated_f);
}