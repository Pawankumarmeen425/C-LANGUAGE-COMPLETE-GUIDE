/*Create an array of multiplation table of 7 upto 10(7x10=70). Use realloc to make it 
store 15 numbers(from 7x1 to 7x10)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    printf("Multiplation table of 7 is::\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("7 x %d = %d\n ", i + 1, ptr[i]);
    }

    int *ptr2;
    ptr2 = realloc(ptr2, 15 * sizeof(int));
    printf("\n After reallocation.........\n");
    for (int i = 0; i < 15; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("7 x %d = %d\n ", i + 1, ptr[i]);
    }

    return 0;
}