/*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary*/

#include <stdio.h>

int main()
{
    int salary;
    float  da, hra,gross_salary;
    printf("Enter Ramesh's basic selary\n");
    scanf("%d", &salary);
    da = salary * 40/100.0;
    printf("his dearness allowance is %f\n", da);
    hra = salary * 20/100.0;
    printf("House rent allowence is %f\n", hra);
    gross_salary=salary+da+hra;
    printf("Ramesh's gross salary is %f\n", gross_salary);

    return 0;
}