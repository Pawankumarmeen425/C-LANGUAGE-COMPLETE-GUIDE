/*Write a program to find largest element of the diagonal of the array*/
#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {43, 3, 2},
        {-5, 3, 9},
        {4, 2, 1}};
    int leofd, leobd;
    leofd = arr[0][0];
    leobd = arr[0][3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (i == j)
            {
                if (arr[i][j] > leofd)
                {
                    leofd = arr[i][j];
                }
            }
            if (i + j == 2)
            {
                if (arr[i][j] > leobd)
                {
                    leobd = arr[i][j];
                }
            }
        }
    }
    printf("Largest element of the forward diagonal of the metrix = %d\n", leofd);
    printf("Largest element of the backword diagonal of the metrix = %d\n", leobd);
    return 0;
}