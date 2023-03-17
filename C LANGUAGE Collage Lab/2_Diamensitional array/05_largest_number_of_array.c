/*Write a program to find largest number of 2-d array*/
#include <stdio.h>

int main()
{
    int array[4][3] = {
        {2, 35, 6},
        {3, 4, -9},
        {6, 6, 53},
        {-9, 6, 23}};
    int larg = array[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] > larg)
            {
                larg = array[i][j];
            }
        }
    }
    printf("\n Largest number of the number = %d\n", larg);
    return 0;
}