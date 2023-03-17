/* C Program to print the pattern in the following way
A
B B
C C C
D D D D
E E E E E 
*/
#include <stdio.h>

int main()
{
    int nol;
    int n=65;

    printf("Enter the number of lines ::\n ");
    scanf("%d", &nol);
    for (int i = 1; i <= nol; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", n);
        }
        printf("\n");
        n++;
    }

    return 0;
}