/* In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary
and DA = 90% of basic salary. If his salary is either equal to or above Rs.
1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's
salary is input through the keyboard write a program to find his gross
salary*/
#include <stdio.h>

int main()
{
    int sal;
    int hra, da, gross_sal;
    printf("Enter employee basic salary::\n");
    scanf("%d", &sal);
    if (sal < 1500)
    {
        hra = sal * 10 / 100;
        da = sal * 90 / 100;
    }
    else
    {
        hra = 500;
        da = sal * 98 / 100;
    }
    gross_sal = sal + hra + da;
    printf("Employee gross salary::%d", gross_sal);

    return 0;
}