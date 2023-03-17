/*Write a program to add two metrix*/
#include <stdio.h>

int main()
{
    int mat1[4][4] = {
        {23, 2, 2, 5},
        {5, 3, -98, 6},
        {4, 2, 23, -5},
        {32, 0, 54, -9}};
    int mat2[4][4] = {
        {5, 89, -6, 12},
        {3, 2, 2, 65},
        {2, 32, 31, 3},
        {-65, 21, -6, 2}};
    int mat [4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\n****Addition of two metrix***\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}