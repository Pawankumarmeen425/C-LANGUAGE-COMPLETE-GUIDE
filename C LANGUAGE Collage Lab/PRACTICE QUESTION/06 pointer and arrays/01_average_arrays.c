/*C Program to Calculate Average Using Arrays.*/
#include <stdio.h>

int main()
{
    int arr[10], sum = 0;
    float avg;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d array:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of the array = %d\n",sum);
    avg = sum / 10.0;
    printf("Average of arrys = %f\n", avg);

    return 0;
}