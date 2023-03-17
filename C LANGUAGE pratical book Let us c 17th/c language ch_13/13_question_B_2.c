/*If an array arr contains n elements, then write a program to check if
arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array:\n", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] == array[n -( i + 1)])
        {
            printf("%d element and %d element of the array are equal::\n", i + 1, n -i);
        }
        else
        {
            printf("%d element and %d element of the array are not equal::\n", i + 1, n -i);
        }
    }

    return 0;
}