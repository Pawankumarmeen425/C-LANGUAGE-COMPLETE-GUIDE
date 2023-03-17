/*Write a program to find transpose of a metrix*/
#include <stdio.h>

int main()
{
    int mat[4][4] = {
        {12, 3, 3,5},
        {-56, -5, 5,5},
        {2, 1, -6,5},
        {23, 56, 2,5}};
    printf("***Transpose of the metrix***\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}