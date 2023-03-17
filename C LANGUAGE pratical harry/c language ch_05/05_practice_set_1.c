/*Write a program using function to find average of three numbers*/
#include <stdio.h>
float average (float n1, float n2, float n3);
int main()
{
    float num1, num2, num3, ave;
    printf("Enter the value of first number:\n");
    scanf("%f", &num1);
    printf("Enter the value of second number:\n");
    scanf("%f", &num2);
    printf("Enter the value of third number:\n");
    scanf("%f", &num3);
    ave = average(num1, num2, num3);
    printf("Average of three number = %f", ave);
    return 0;
}
float average(float n1, float n2, float n3)
{
    float ave;
    ave = (n1 + n2 + n3) / 3.0;
    return ave;
    /*int function can not return float value */
}