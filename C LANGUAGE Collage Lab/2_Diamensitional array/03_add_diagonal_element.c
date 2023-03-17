/*Write a program to add element of diagonal of matrix*/
#include <stdio.h>

int main()
{
    int array[4][4] = {
        {23, 2, 5, 2},
        {23, 1, 6, 8},
        {6, 3, 2, 0},
        {-6, 6, 89, 5}};
        int addf = 0,addb=0;
        for (int i = 0; i < 4; i++)
        {
           for (int j = 0; j < 4; j++)
           {
               if (i==j)
               {
                  addf = addf+array[i][j];
               }
               if (i+j==3)
               {
                   addb = addb+array[i][j];
               }
               
           }
           
        }
        printf("\nTotal of forward diognal elements = %d\n",addf);
         printf("Total of backword diognal elements = %d\n\n",addb);
    return 0;
}