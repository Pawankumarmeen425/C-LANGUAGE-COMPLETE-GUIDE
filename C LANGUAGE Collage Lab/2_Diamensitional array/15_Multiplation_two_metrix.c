/*Perform  a program to multiplay two metrix*/
#include <stdio.h>

int main()
{
    int mat1[3][3] = {
        {2, 4, -5},
        {6, 2, 0},
        {2, 7, 6}};
    int mat2[3][3] = {
        {2, 6, 3},
        {-5, 2, -6},
        {9, 1, 0}};
        int mat[4][4];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3;j++)
            {
                mat[i][j]=mat1[i][j]*mat2[i][j]+mat1[i][j+1-]*mat2[i+1][j]+mat1[i][j+2]*mat2[i+2][j];
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
        
    return 0;
}