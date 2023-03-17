/*Write a program ot demonstrate the usage fo free() with malloc()*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int *)malloc(600 * sizeof(int));
    // This way reserve unwanted memory
    // for (int i = 0; i < 600; i++)
    // { 
    //     ptr2 = (int *)malloc(60000 * sizeof(int));
    //     printf("Enter the value of %d element ::\n", i + 1);
    //     scanf("%d", &ptr[i]);
    // }
    for (int i = 0; i < 600; i++)
    { 
        ptr2 = (int *)malloc(60000 * sizeof(int));
        printf("Enter the value of %d element ::\n", i + 1);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is :: %d\n", i + 1, ptr[i]);
    }

    return 0;
}