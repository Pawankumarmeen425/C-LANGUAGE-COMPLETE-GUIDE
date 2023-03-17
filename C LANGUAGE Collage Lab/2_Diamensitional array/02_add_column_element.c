/*Write a program to add element of each column of matrix*/
#include <stdio.h>

int main()
{
    int array[3][3] = {
        {32, 5, 2},
        {23, 6, 2},
        {-5, 54, 2}};
    int add = 0;
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add = add + array[j][i];
        }
        printf("Total of %d column = %d\n", i + 1, add);
        add = 0;
    }
    printf("\n");

    return 0;
}