/*C Program to print the pattern in the following way
                      
                      *
                    * * *
                  * * * * *
                * * * * * * *
              * * * * * * * * * 
            * * * * * * * * * * *
                    */
#include <stdio.h>

int main()
{
    int nol;
    printf("Enter the number of lines::\n");
    scanf("%d", &nol);
    nol = 2 * nol;
    for (int i = 1; i <= nol;)
    {
        for (int s = 1; s<=(nol-i); s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        i = i + 2;
    }

    return 0;
}