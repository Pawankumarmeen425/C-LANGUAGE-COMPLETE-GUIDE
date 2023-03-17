/*Write a program to find smallest number of the 2-d array*/
#include <stdio.h>

int main()
{
    int array[5][3] = {
        {32, 4, 3},
        {6, 3, 7},
        {-46, 9, 5},
        {3, 42, 6},
        {-6, 5, -2}};
        int small = array[0][0];
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (array[i][j]<small)
                {
                    small = array[i][j];
                }
                
            }
            
        }
        printf("\n Smallest element of the array = %d\n",small);
    return 0;
}