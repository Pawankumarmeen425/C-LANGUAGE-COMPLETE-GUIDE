/*C Program to Add Two Matrix Using Multi-dimensional Arrays.*/
#include <stdio.h>

int main()
{
    int mat1[5][5], mat2[5][5], sum[5][5];
    int c, r;
    printf("Enter the number of rows and column of the  metrix::\n");
    scanf("%d%d", &r, &c);
    printf("::Enter the elements of the first metrix::\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("::Enter the elements of the second metrix::\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n::Elements of the first metrix::\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n::Elements of the second metrix::\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n::Sum of matrix first and metrix second::\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}