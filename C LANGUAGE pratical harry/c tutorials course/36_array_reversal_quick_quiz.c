#include <stdio.h>

void arrayrev(int arr[]);
void arrayrev(int arr[])
{
    // 2,34,345,232,32
    // 32,34,345,232,2
    // 32,232,343,34,2
    int temp;

    for (int i = 0; i < 11/2; i++)
    {
        /*If we run for loop at the time of size array. Then it reverse two time and final result is the 
        oringinal array.
        so we run the loop at the time of half of size of array*/
        // Sweap item arr[i] with arr[10-i]
        temp = arr[i];
        arr[i] = arr[10 - i];
        arr[10 - i] = temp;
    }
}
int main()
{
    int arr[] = {2, 34, 345, 232, 32, 52, 43, 12, 4, 2, 1};
    printf("Elements of the array before reversal::\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d element of the array is : %d\n", i, arr[i]);
    }
    printf("\nElements of the array after reversal::\n");
    arrayrev(arr);
    for (int i = 0; i < 11; i++)
    {
        printf("%d element of the array is : %d\n", i, arr[i]);
    }

    return 0;
}