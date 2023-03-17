/*Write a program to find largest number in each column */
#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {43, 3, 2},
        {-5, 56, 9},
        {4, 2, 1}};
    int lnoc;
    for (int i = 0; i < 3; i++)
    {
        lnoc = arr[0][i];
        for (int j = 0; j < 3; j++)
        {

            if (arr[j][i] > lnoc)
            {
                lnoc = arr[j][i];
            }
        }
        printf("Largest number of %d column of the array = %d\n", i + 1, lnoc);
    }

    return 0;
}