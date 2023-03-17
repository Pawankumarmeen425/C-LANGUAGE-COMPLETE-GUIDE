/*C Program to print the pattern in the following way
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/
#include <stdio.h>

int main()
{
    int nol;
    printf("Enter the number of lines::\n");
    scanf("%d", &nol);
    for (int i = nol; i != 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}