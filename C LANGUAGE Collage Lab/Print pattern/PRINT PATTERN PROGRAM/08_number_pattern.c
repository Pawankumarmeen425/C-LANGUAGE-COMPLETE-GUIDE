/*C Program to print the pattern in the following way
                1
              2 3 2
            3 4 5 4 3
          4 5 6 7 6 5 4
        5 6 7 8 9 8 7 6 5
        */
#include <stdio.h>

int main()
{
    int nol;
    printf("Enter the number of lines::\n");
    scanf("%d", &nol);
    nol = 2 * nol;
    for (int i = 1; i <= nol; i++)
    {
        for (int s = 1; s < (nol - i); s++)
        {
            printf(" ");
        }
        for (int j = i; j != 0; j--)
        {
            printf("%d ", i + j - 1);
        }
        printf("\n");
        i = i + 2;
    }

    return 0;
}