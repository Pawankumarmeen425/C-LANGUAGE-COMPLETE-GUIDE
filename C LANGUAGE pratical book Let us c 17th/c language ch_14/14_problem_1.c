
/*Write a program to pick up the largest number from any 5 row by 5
column matrix*/
#include<stdio.h>

int main (){
    int array[5][5] = {
           {12,12,12,1,32},
        {45,34,23,76,34},
        {84,1,5,8,4},
        {4,5,56,646,45},
        {54,5,5,54,5}
    };
    int big=0;
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
       {
           if (array[i][j]>big)
           {
               big = array[i][j];
           }
           
       }
       
    }
    printf("\n Largest element of the array is : %d\n\n",big);
return 0;
}