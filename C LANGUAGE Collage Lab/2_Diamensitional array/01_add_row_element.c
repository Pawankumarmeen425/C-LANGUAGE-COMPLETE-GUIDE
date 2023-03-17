/*Write a program to add element of each row of matrix*/
#include <stdio.h>

int main()
{
    int array[4][4] = {
        {3, 2, 56, 3},
        {6, 3, 8, 3},
        {6, 6, 59, 6},
        {6, 45, 4, 2}};
        int row=0;
        for (int  i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                row = row+array[i][j];
            }
            printf("Total of %d row = %d\n",i+1,row);
            row = 0;
        }
        
    return 0;
}