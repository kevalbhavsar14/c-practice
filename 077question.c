/*
Date   : 16-1-2021
Aim    : Question answer
Source : ansi c e8.2
*/
#include <stdio.h>

void main()
{
    char ans[20];
    char correct_ans[] = "Dennis Ritchie";
    int i, j, flag = 0;

    printf("Who is the inventor of C?\n");
    for(i = 0; i < 3; i++)
    {
        gets(ans);
        for(j = 0; correct_ans[j] != '\0'; j++)
        {
            flag = 0;
            if(ans[j] != correct_ans[j] && i < 2)
            {
                flag = 1;
                printf("try again\n");
                break;
            }
            else if(ans[j] != correct_ans[j] && i == 2)
            {
                printf("Correct answer: %s", correct_ans);
                break;
            }
        }
        if(!flag)
        {
            printf("Good");
            break;
        }
    }
}