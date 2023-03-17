/*An array contains 10 integers. Recive the number to be searched in the array as input . 
Write a program to search this number in array and display the number of times it occurs
 in the array*/
#include <stdio.h>

int main()
{
    int array[10] = {1, 3, 5, 1, 42, 1, 2, 5, 2, 7};
    int num, t = 0;
    printf("Enter  the number that you  want search:\n");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == num)
        {
            t = t + 1;
        }
    }
    if (t == 0)
    {
        printf("Number %d not avalible in the array::\n",num);
    }
    else
    {
        printf("Number %d is found %d times in the array:\n", num, t);
    }
    return 0;
}