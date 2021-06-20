/*
Date: 4-1-2021
Aim: patterns
source: https://www.javatpoint.com/star-program-in-c
        https://www.faceprep.in/c/pattern-programs-in-c/
        pascal baaki
*/
#include <stdio.h>
#include <math.h>

void main()
{
    // int n, i, j;
    // printf("Enter number: ");
    // scanf("%d", &n);

    // 27. square wave
    int n, h, w, i, j, k, flag;
    printf("Enter number: ");
    scanf("%d%d%d", &n, &h, &w);

    for (i = 0; i < h; i++) {
        k = 0;
        flag = 1;
        for (j = 0; k < 2*n; j = (j+1)%w) {
            if (i == 0 && flag) printf("%d",j);
            else if (i == h-1 && !flag) printf("%d",j);
            else if (j == 0) printf("%d",j);
            else printf(" ");
            if (j == w-1) {
                flag = 1 - flag;
                k++;
            }
        }
        printf("\n");
    }

    // 26. wave pattern
    // int l;
    // for(i = 0; i < 5; i++)
    // {
    //     for(j = 0; j < 5-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     printf(">>");
    //     for(l = 0; l < n; l++)
    //     {
    //         for(j = 1; j < 2*i+1; j++)
    //         {
    //             printf(" ");
    //         }
    //         printf(">>");
    //          for(j = 1; j < 10-(2*i+1); j++)
    //         {
    //             printf(" ");
    //         }
    //         printf(">>");
    //     }
    //     printf("\n");
    // }

    // 25. 
    // for(i = 1; i <= n; i++)
    // {
    //     for(j = 1; j <= n; j++)
    //     {
    //         if(j <= i)
    //         printf("%d ", i);
    //         else
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    // 24. bar chart vertical
    // int n1, n2, n3, n4, n5;

    // printf("Enter 5 numbers: ");
    // scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    // for(i = 0; i < 10; i++)
    // {
    //     if(i >= 10-n1)
    //         printf("   #");
    //     else
    //         printf("    ");
    //     if(i >= 10-n2)
    //         printf("   #");
    //     else
    //         printf("    ");
    //     if(i >= 10-n3)
    //         printf("   #");
    //     else
    //         printf("    ");
    //     if(i >= 10-n4)
    //         printf("   #");
    //     else
    //         printf("    ");
    //     if(i >= 10-n5)
    //         printf("   #");
    //     else
    //         printf("    ");
    //     printf("\n");
    // }
    // printf("  [1] [2] [3] [4] [5]");

    // // 23. circle
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n; j++)
    //     {
    //         if(n/2 > sqrt((n/2 - i)*(n/2 - i) + (n/2 - j)*(n/2 - j)))
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }

    // 22. Zelda Triforce symbol
    // for(i = 0; i <= n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j < i; j++)
    //     {
    //         if(i > n/2 && (j >= i - n/2 && j < i - (i - n/2)))
    //             printf("  ");
    //         else
    //             printf("* ");
    //     }
    //     printf("\n");
    // }


    // 21. stairs
    // for(i = 0; i < n*2+1; i++)
    // {
    //     for(j = 0; j < i; j+=2)
    //     {
    //         printf("* * ");
    //     }
    //     printf("\n");
    // }

    // 20. Pascal's triangle
    //  for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j < i; j++)
    //     {
    //         printf("%d ",j + 1);
    //     }
    //     printf("\n");
    // }

    // 19. Hollow invertedhalf pyramid
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         if(i == 0 || j == 0 || i+j == n-1)
    //             printf("%d ", j + i + 1);
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }

    // 18. Palindrome pyramid 2
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for(j = i; j < 3*i+1; j++)
    //     {
    //         if(j > 2*i)
    //             printf("%d ", -j+1+4*i);
    //         else    
    //             printf("%d ", j + 1);
    //     }
    //     printf("\n");
    // }

    // 17. Palindrome pyramid
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for(j = 0; j < 2*i+1; j++)
    //     {
    //         if(j > i)
    //             printf("%d ", -j+1+2*i);
    //         else    
    //             printf("%d ", j + 1);
    //     }
    //     printf("\n");
    // }

    // 16. Diamond star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for(j = 0; j < 2*i+1; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for(i = n-2; i >= 0; i--)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for(j = 0; j < 2*i+1; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 15. Plus
    // if(n % 2 == 0)
    //     n++;
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n; j++)
    //     {
    //         if(i == n/2 || j == n/2)
    //             printf(" +");
    //         else
    //         printf("  ");
    //     }
    //     printf("\n");
    // }

    // 14. Play icon
    // for(i = 0; i <= n; i++)
    // {
    //     for (j = 0; j < i; j++) {
    //         if (i%2 ^ j%2) {
    //             printf(" *");
    //         } else {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    // for(i = n-1; i > 0; i--)  
    // {
    //     for(j = 0; j < i; j++)  
    //     {  
    //         if (i%2 ^ j%2) {
    //             printf(" *");
    //         } else {
    //             printf("  ");
    //         }
    //     }  
    //     printf("\n");  
    // }    

    // 13. half diamond star
    // for(i = 0; i <= n; i++)
    // {
    //     for(j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for(i = n-1; i > 0; i--)  
    // {  
    //     for(j = 0; j < i; j++)  
    //     {  
    //         printf("* ");  
    //     }  
    //     printf("\n");  
    // }    

    // 12. hollow pyramid star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j < i; j++)
    //     {
    //         if(i == 0 || j == 0 || i == n-1 || j == i-1)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }

    // 11. pyramid star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 10. Hollow mirrored inverted right triangle star 
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for(j = 0; j < n-i; j++)
    //     {
    //         if(i == 0 || j == 0 || i+j == n-1)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }

    // 9. Hollow inverted right triangle star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         if(i == 0 || j == 0 || i+j == n-1)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }

    // 8. Mirrored right triangle star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for(j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    // // 7. Right triangle star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 6. Hollow Mirrored rhombus star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j < n; j++)
    //     {
    //         if(i == 0 || i == n-1 || j == 0 || j == n-1)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }

    // 5. Mirrored rhombus star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j < n; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 4. Hollow Rhombus star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j < n; j++)
    //     {
    //         if(i == 0 || i == n-1 || j == 0 || j == n-1)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }

    // 3. Rhombus star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j < n; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 2. Hollow square star with diagonal
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n; j++)
    //     {
    //         if(i == 0 || i == n-1 || j == 0 || j == n-1 || i == j || i+j == n-1)
    //             printf("* ");
    //         else
    //             printf("  ");
            
    //     }
    //     printf("\n");
    // }

    // 1. solid square star
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
}