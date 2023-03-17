/*Write a program using  a function which calculate the sum and average of two numbers
Use pointer and print the values of sum and average in main()*/
#include <stdio.h>
int sum_avg(int num1, int num2, int *sum, float *avg);
int main()
{
    int num1, num2, sum;
    float avg;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    sum_avg(num1, num2, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of average is %f\n", avg);

    return 0;
}
int sum_avg(int num1, int num2, int *sum, float *avg)
{
    *sum = num1 + num2;
    *avg = *sum / 2.0;
}
