#include <stdio.h>

int main()
{
    int arr[] = {3, 5, 0, 6, 7, 33, 3, 7, 3};
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr);
    // arr give base address of the array.
    printf("The address of first element of the array is %d\n", arr + 0);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n\n", arr + 1);
    // arr++    We can't perform this task because arr is a constant

    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of first element of the array is %d\n", *(arr + 0));
    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array is %d\n", *(arr + 1));

    return 0;
}