/*Write a program to find smallest number of each column*/
#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {43, 3, 2},
        {-5, 56, 9},
        {4, 2, 1}};
    int snoc;
    for (int i = 0; i < 3; i++)
    {
        snoc = arr[0][i];
        for (int j = 0; j < 3; j++)
        {

            if (arr[j][i] < snoc)
            {
                snoc = arr[j][i];
            }
        }
        printf("Smallest  number of %d column of the array = %d\n", i + 1, snoc);
    }

    return 0;
}