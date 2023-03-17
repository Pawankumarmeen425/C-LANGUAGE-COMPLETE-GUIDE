/*Write a program to add corner element of the matrix*/
#include <stdio.h>

int main()
{
    int mat[4][4] = {
        {2, 3, 6, 3},
        {2, 33, 4, 2},
        {7, -6, 4, 2},
        {78, 23, 6, 2}};
    int addc = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 3) || (i == 3 && j == 0) || (i == 3 && j == 3))
            {
                addc = addc + mat[i][j];
            }
        }
    }

    printf("\n Total of corner element of the matrix = %d\n", addc);
    return 0;
}