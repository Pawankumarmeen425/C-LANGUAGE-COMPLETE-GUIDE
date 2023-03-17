/*Twenty-five numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how
many are negative, how many are even and how many odd.*/
#include <stdio.h>

int main()
{
    int array[25];
    int nop = 0, non = 0, noe = 0, noo = 0;
    for (int i = 0; i < 25; i++)
    {
        printf("Enter the %d element \n", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 25; i++)
    {
        if (array[i] < 0)
        {
            non = non + 1;
        }
        else
        {
            nop = nop + 1;
        }
    }
    for (int i = 0; i < 25; i++)
    {
        if (array[i] % 2 == 0)
        {
            noe = noe + 1;
        }
        else
        {
            noo = noo + 1;
        }
    }
    printf("Number of positive numbers= %d\n", nop);
    printf("Number of negative numbers = %d\n", non);
    printf("Number of even numbers = %d\n", noe);
    printf("Number of odd numbers = %d\n", noo);
    return 0;
}