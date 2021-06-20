/*
Date   : 17-1-2021
Aim    : convert price number into words
Source : ansi c e8.9
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char rupee[5], paise[3];
    char word[3][10][10] = {{"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"},
                            {"","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"},
                            {"","","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"}};
    int i, j, rl, pl;

    printf("Enter price of an item: ");
    scanf("%[^.]", rupee);
    scanf("%s", paise);
    rl = strlen(rupee);
    pl = strlen(paise);
    // printf("%d",rl);
    // printf("%d",pl);

    for(i = 0; i < rl; i++)
    {
        if(rl == 4)
        {
            if(i == 0)
            {
                printf("%s Thousand ", word[0][rupee[i]-48]);
            }
            else if(i == 1)
            {
                printf("%s Hundred ", word[0][rupee[i]-48]);
            }
            else if(i == 2)
            {
                if(rupee[i] == '1')
                {
                    printf("%s ", word[1][rupee[i+1]-48]);
                }
                else
                {
                    printf("%s %s ", word[2][rupee[i]-48], word[0][rupee[i+1]-48]);
                }
            }
        }
        else if(rl == 3)
        {
            if(i == 0)
            {
                printf("%s Hundred ", word[0][rupee[i]-48]);
            }
            else if(i == 1)
            {
                if(rupee[i] == '1')
                {
                    printf("%s ", word[1][rupee[i+1]-48]);
                }
                else
                {
                    printf("%s %s ", word[2][rupee[i]-48], word[0][rupee[i+1]-48]);
                }
            }
        }
        else if(rl == 2)
        {
            if(rupee[i] == '1')
            {
                printf("%s ", word[1][rupee[i+1]-48]);
                break;
            }
            else
            {
                printf("%s %s ", word[2][rupee[i]-48], word[0][rupee[i+1]-48]);
            }
        }
        else
        {
            printf("%s ", word[0][rupee[i]-48]);
        }
    }
    if(pl == 2)
    {
        if(paise[i] == '1')
        {
            printf("And Paise %s ", word[1][paise[i+1]-48]);
        }
        else
        {
            printf("And Paise %s %s ", word[2][paise[i]-48], word[0][paise[i+1]-48]);
        }
    }
    else
    {
        printf("And Paise %s ", word[0][paise[i]-48]);
    }
}