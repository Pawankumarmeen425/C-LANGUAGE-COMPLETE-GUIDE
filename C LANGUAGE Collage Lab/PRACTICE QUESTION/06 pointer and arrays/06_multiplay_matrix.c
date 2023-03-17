/*C Program to Multiply to Matrix Using Multi-dimensional Arrays*/
#include <stdio.h>

int main()
{
    int mat1[5][5], mat2[5][5], mult[5][5];
    int c1, r1, c2, r2;

    printf("Enter the number of rows and column of first metrix::\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the number of rows and column of second metrix::\n");
    scanf("%d%d", &r2, &c2);
    if (r1 != c2 || c1 != r2)
    {
        printf("Error!! Row of the first metrix not equal to column of second metrix \nOr Column of first metrix is not equal to row of second metrix");
        printf("Please Enter valid number rows and column::\n");
        printf("Enter the number of rows and column of first metrix::\n");
        scanf("%d%d", &r1, &c1);
        printf("Enter the number of rows and column of second metrix::\n");
        scanf("%d%d", &r2, &c2);
    }

    printf("\n::Enter the elements of the first metrix::\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n::Enter the elements of the second metrix::\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n::Elements of the first metrix::\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n::Elements of the second metrix::\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    // r1==c2 and c1==r2
    // for (int k = 0; k < r2; k++)
    // {
    //     for (int i = 0; i < c1; i++)
    //     {
    //         for (int j = 0; j < c2; j++)
    //         {
    //             mult[k][i] = mult[k][j] + mat1[i][j] * mat2[j][i];
    //         }
    //     }
    // }
    printf("\n\n::Multiplation of first metrix and second metrix::\n");
    for (int k = 0; k < r1; k++)
    {
        for (int i = 0; i < c2; i++)
        {
            mult[k][i] = 0;
            for (int j = 0; j < c1; j++)
            {
                mult[k][i] = mult[k][i] + mat1[k][j] * mat2[j][i];
            }
            printf("%d\t", mult[k][i]);
        }

        printf("\n");
    }

    return 0;
}