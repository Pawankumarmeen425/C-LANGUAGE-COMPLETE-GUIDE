/*C Program to Multiply two Matrices by Passing Matrix to a Function.*/
#include <stdio.h>
void mult_mat(int m1[][5], int m2[][5], int, int, int, int);
int main()
{
    int mat1[5][5], mat2[5][5];
    int r1, c1, r2, c2;
    /*For multiplation of two metrix row of the first metrix should be equal to column of
     second metrix.And colmun of first metrx should be equal to row of second metrix*/
    printf("::Enter the number of rows and column of first  metrix::\n");
    scanf("%d%d", &r1, &c1);
    printf("::Enter the number of rows and column of second  metrix::\n");
    scanf("%d%d", &r2, &c2);
    if (r1 != c2 || c1 != r2)
    {
        printf("Error!Row of the first matrix not equal to colmun of secont metrix:\n");
        printf("::Enter the number of rows and column of first  metrix::\n");
        scanf("%d%d", &r1, &c1);
        printf("::Enter the number of rows and column of second  metrix::\n");
        scanf("%d%d", &r2, &c2);
    }

    printf("Enter the elements of the first metrix::\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of the second metrix::\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    mult_mat(mat1, mat2, r1, c1, r2, c2);

    return 0;
}
void mult_mat(int m1[][5], int m2[][5], int r1, int c1, int r2, int c2)
{
    int result[5][5];
    // r1==c2 and c1==r2
     printf("\n\nElements of the first metrix::\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d  ", m1[i][j]);
        }
        printf("\n");
    }
    printf("\n\nElements of the second metrix::\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d  ", m2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j] = result[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }
    
    printf("::Product of two metrix::\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j <c2; j++)
        {
           printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}
