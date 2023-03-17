/*Write a program to count no. of positive numbers, negative numbers  
  and zeros in the array.*/
#include <stdio.h>

int main()
{
    int array[10], nop = 0, non = 0, noz = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d elements of the array:\n", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > 0)
        {
            nop++;
        }
        else if (array[i] < 0)
        {
            non++;
        }
        else
        {
            noz++;
        }
    }
    printf("Nomber of positive elements = %d\n", nop);
    printf("Nomber of negative elements = %d\n", non);
    printf("Nomber of zero elements = %d\n", noz);

    return 0;
}
