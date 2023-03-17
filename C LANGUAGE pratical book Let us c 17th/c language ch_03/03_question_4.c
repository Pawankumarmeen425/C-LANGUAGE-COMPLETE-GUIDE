/*Write a program to find the absolute value of a number entered
through the keyboard.*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    if (num < 0)
    {
        num = num * (-1);
        printf("The absolute value of given number is %d\n", num);
    }
    else
    {
        printf("The absolute value of given number is %d\n", num);
    }
    return 0;
}