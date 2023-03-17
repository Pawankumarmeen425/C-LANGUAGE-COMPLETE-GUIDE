/*C Program to sweap two number using temprory variable*/
#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("Enter the first  number:\n");
    scanf("%d", &num1);
    printf("Enter the second  number:\n");
    scanf("%d", &num2);
    printf("\n****Value before sweaping**** \n ");
    printf("Value of first number = %d\n", num1);
    printf("Value of second number = %d\n", num2);
    temp = num2;
    num2 = num1;
    num1 = temp;
    printf("\n****Value after sweaping**** \n ");
    printf("Value of first number = %d\n", num1);
    printf("Value of second number = %d\n", num2);
    return 0;
}