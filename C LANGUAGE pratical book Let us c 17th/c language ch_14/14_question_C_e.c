/*Write a program to find if a square matrix is symmetric.*/
#include <stdio.h>

int main()
{
    int mat[3][3];
    int result[3][3];
    printf("Enter the element of the array::\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j]= result[i][j]+mat[i][k]*mat[j][k];
            }
            
        }
        
    }
    printf("Squre of the Metrix::\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}