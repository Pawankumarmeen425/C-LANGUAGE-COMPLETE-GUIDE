/*Write a program to obtain transpose of a 4 x 4 matrix. The
transpose of a matrix is obtained by exchanging the elements of
each row with the elements of the corresponding column.*/
#include <stdio.h>

int main()
{
    int matrix[4][4] = {
        {2, 4, 6, 2},
        {6, 3, 2, 8},
        {2, 4, 67, 9},
        {23, 63, 9, 54}};
        printf("Transpose of the Metrix::\n"); 
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%d ",matrix[j][i]);
            }
            printf("\n");
        }
        
    return 0;
}