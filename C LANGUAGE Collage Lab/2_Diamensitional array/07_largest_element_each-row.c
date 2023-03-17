/*Write a program to find largest number in each row */
#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {43, 3, 2},
        {-5, 56, 9},
        {4, 2, 1}};
    int lnor;
    for (int i = 0; i < 3; i++)
    {
        lnor = arr[i][0];
        for (int j = 0; j < 3; j++)
        {

            if (arr[i][j] > lnor)
            {
                lnor = arr[i][j];
            }
        }
        printf("Largest number of %d row of the array = %d\n", i + 1, lnor);
    }

    return 0;
}