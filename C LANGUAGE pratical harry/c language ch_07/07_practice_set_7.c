/*Create an array of sige 3*10  containing multiplation tables of the numbers 2,7 and 9 
  respectivaliy*/
#include <stdio.h>
void multable(int *array, int num, int n);
int main()
{
    int array[3][10];

    multable(array[0], 2, 10);
    multable(array[1], 7, 10);
    multable(array[2], 9, 10);
    return 0;
}
void multable(int *array, int num, int n)
{
    printf("\n\n***Multiplation Table of number %d:\n", num);
    for (int i = 0; i < 10; i++)
    {
        array[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", num, i + 1, array[i]);
    }
}