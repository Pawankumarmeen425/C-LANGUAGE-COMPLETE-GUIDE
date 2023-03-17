/* In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary
and DA = 90% of basic salary. If his salary is either equal to or above Rs.
1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's
salary is input through the keyboard write a program to find his gross
salary.*/

#include<stdio.h>

int main (){
    int basic_salary;
    float HRA=0, DA=0, gross_salary;
    printf("Enter employee basic salary =");
    scanf("%d",&basic_salary);

    if(basic_salary<1500){
        HRA=basic_salary*10/100.0;
        DA=basic_salary*90/100.0;
    }
    else
    {
    HRA=500;
    DA=basic_salary*98/100.0;
    }
    gross_salary=basic_salary+HRA+DA;
    printf("Employee gross salary = %f", gross_salary);
return 0;
}