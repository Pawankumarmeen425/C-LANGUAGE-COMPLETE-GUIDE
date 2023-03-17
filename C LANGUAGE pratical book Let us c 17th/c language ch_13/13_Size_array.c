#include <stdio.h>

int main()
{
    int max;
    printf("Enter the size of the array:\n");
    scanf("%d", &max);
    int array[max];

    for (int i = 0; i < max; i++)
    {
        printf("Enter %d elelment of the array \n", i+1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < max; i++)
    {
        printf("%d elelment of the array = %d\n", i + 1, array[i]);
    }

    return 0;
}