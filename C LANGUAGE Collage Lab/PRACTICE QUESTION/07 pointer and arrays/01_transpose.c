/*C Program to Find Transpose of a Matrix.*/
#include <stdio.h>

int main()
{
    int mat[5][5];
    int r, c;
    printf("::Enter the number of rows and column::\n");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of the metrix::\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n\nElements of the metrix::\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n::Transpose of the metrix::\n");
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}