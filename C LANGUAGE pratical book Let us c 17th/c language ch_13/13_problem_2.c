/*Write a program to copy the contents of a 5 element integer array into another array
  in reverse order*/
#include <stdio.h>

int main()
{
    int array1[5], array2[5];
    printf("Enter 5 element of first array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf(":::5 element of second array in reverse order:::\n");
    for (int i = 0, j = 4; i < 5; i++,j--)
    {
        array2[i] = array1[j];
        printf("%d\t", array2[i]);
        
    }

    return 0;
}