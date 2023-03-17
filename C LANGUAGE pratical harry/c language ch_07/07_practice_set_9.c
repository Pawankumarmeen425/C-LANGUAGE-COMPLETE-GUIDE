/*Create a three dimensional array and pirnt the address of its elements in increasing 
order*/
#include <stdio.h>

int main()
{
    int array[3][3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Address of array[%d][%d][%d] = %d\n", i, j, k, &array[i][j][k]);
            }
        }
    }

    return 0;
}