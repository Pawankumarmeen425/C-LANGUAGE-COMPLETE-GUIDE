/*Write a program that interchange element at odd position with element at even position
 in an array of 10 element*/
 
#include <stdio.h>

int main()
{
    int array[10] = {12, 1, 34, 35, 2, 36, 43, 2, 53, 2};
    for (int i = 0; i < 10; )
    {
        printf("%d\t%d\t",array[i+1],array[i]);
        i = i+2;
    }

    return 0;
}