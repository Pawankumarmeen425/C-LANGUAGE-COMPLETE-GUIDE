/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary*/

#include <stdio.h>
int main()
{
int basic_salary;
float da,hra, gross_salary;
printf("Enter Ramesh basic salary\n");
scanf("%d",&basic_salary);
da=basic_salary*40/100.0;
hra=basic_salary*20/100.0;
gross_salary=basic_salary+da+hra;

printf("His dearness allowance is = %f\n",da);
printf("His house rent allowance is =%f\n",hra);
printf("Ramesh gross salary is = %f\n",gross_salary);
    return 0;
}