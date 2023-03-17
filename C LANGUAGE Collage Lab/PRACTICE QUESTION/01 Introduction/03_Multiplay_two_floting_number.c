/*C Program to Multiplay two floting point number*/
#include <stdio.h>

int main()
{
    float num1, num2, result;
    printf("Enter the first number:\n");
    scanf("%f", &num1);
    printf("Enter the second number:\n");
    scanf("%f", &num2);
    result = num1*num2;
    printf("Multiplaction of %0.2f and %0.2f = %0.3f",num1,num2,result);
    return 0;
}