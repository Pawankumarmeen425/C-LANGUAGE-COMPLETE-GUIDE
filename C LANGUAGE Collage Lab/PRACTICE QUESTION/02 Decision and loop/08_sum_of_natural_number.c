/*C Program to Calculate sum of natural numbers*/
#include <stdio.h>

int main()
{
    int number, sum = 0;
    printf("Enter the numbers that you want sum:::\n");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
    {
        sum = sum + i;
    }
    printf("Sum of  first %d natural numbers = %d", number, sum);
    return 0;
}