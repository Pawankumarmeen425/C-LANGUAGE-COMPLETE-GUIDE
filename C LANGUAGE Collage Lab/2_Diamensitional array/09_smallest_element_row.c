/*Write a program to find smallest element of each row*/
#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {43, 3, 2},
        {-5, 56, 9},
        {4, 2, 1}};
    int snor;
    for (int i = 0; i < 3; i++)
    {
        snor = arr[i][0];
        for (int j = 0; j < 3; j++)
        {

            if (arr[i][j] < snor)
            {
                snor = arr[i][j];
            }
        }
        printf("Smallest number of %d row of the array = %d\n", i + 1, snor);
    }

    return 0;
}