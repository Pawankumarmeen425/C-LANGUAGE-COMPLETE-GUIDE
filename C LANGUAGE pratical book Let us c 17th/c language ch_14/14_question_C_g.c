/*Write a program to multiply any two 3 x 3 matrices.*/
#include <stdio.h>

int main()
{
    int mat1[3][3] = {
        {2, 1, 4},
        {1, 7, 4},
        {0, 5, 2}};
    int mat2[3][3] = {
        {2, 6, 2},
        {3, 0, 4},
        {-6, 4, 2}};
    int mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {  mat[i][j]=0;
           for (int k = 0; k <3 ; k++)
           {  
               mat[i][j]=mat[i][j]+mat1[i][k]*mat2[k][j];
           }
           
        }
    }
    printf(":: Product of matrix1 and matrix2 ::\n");
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}