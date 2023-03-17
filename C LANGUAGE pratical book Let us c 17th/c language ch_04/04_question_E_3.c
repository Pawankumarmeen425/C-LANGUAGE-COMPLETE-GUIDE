/*Write a program to find the greatest of the three numbers entered
through the keyboard. Use conditional operators.*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, great;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    printf("Enter the third number:\n");
    scanf("%d", &num3);

    great = (num1 > num2 && num1 > num3) ? (num1) : (num2 > num1 && num2 > num3) ? (num2) : (num3);
    printf("\n%d is the greatest number:\n", great);
    return 0;
}