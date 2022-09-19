#include <stdio.h>

/*
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
    
    */

void main(void)
{
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (5 - j < i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (int j = 1; j <= 5 ; j++)
            {
                if (i-5<j)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}