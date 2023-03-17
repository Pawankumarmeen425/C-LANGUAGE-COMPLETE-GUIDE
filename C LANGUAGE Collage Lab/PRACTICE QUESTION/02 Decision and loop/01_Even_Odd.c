/*C Program to  check weather a number is even or odd*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is a even number:\n", num);
    }
    else
    {
        printf("%d is a odd number:\n", num);
    }
    return 0;
}