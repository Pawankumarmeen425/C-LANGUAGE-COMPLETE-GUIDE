/*C Program to Find Largest Number Using Dynamic Memory Allocation*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int num, larg_num = 0;
    printf("Enter the size of array::\n");
    scanf("%d", &num);
    ptr = (int *)malloc(num * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error!! Memory doesn't allocated::\n");
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            printf("Enter the value of %d element of array ::\n", i + 1);
            scanf("%d", &ptr[i]);
        }
        for (int i = 0; i < num; i++)
        {
            if (ptr[i] > larg_num)
            {
                larg_num = ptr[i];
            }
        }
        printf("Largest number of the array is %d.\n", larg_num);
    }
    return 0;
}