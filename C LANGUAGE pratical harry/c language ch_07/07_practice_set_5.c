/*Write a program  containing a function which revereses the array passed to it*/
#include <stdio.h>
void reverse(int *array, int n);
int main()
{
    int array[] = {
        32,
        423,
        423,
        423,
        423,
        443,
        2423,
        34,
        2,
    };
    reverse(array, 9);
    return 0;
}
void reverse(int *array, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf(" The value of %d element of the array is : %d \n ", n - i, array[i]);
    }
}
