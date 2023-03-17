/*Example 4.3: Write a program to calculate the salary as per the
following table
Gender Years of Service   Qualifications     Salary
Male   >= 10          Post-Graduate               15000
       >= 10          Graduate               10000
       < 10          Post-Graduate               10000
       < 10          Graduate               7000
Female >= 10          Post-Graduate               12000
       >= 10          Graduate               9000
       < 10          Post-Graduate               10000
       < 10          Graduate               6000*/

#include <stdio.h>

int main()
{
       int yos, salary;
       char gender, qual;
       printf("Enter gender(male=M,female=F), years of service, Qualifaction(post Graduate=P,Graduate=G).\n");
       scanf("%c\n%d\n%c", &gender, &yos, &qual);

       if (gender == 'M' && yos >= 10 && qual == 'P')
       {
              printf("Employee salary=15000");
       }
       else if (gender == 'M' && yos >= 10 && qual == 'G')
       {
              printf("Employee salary=10000");
       }
       else if (gender == 'M' && yos < 10 && qual == 'P')
       {
              printf("Employee salary=10000");
       }
       else if (gender == 'M' && yos < 10 && qual == 'G')
       {
              printf("Employee salary=7000");
       }
       else if (gender == 'F' && yos >= 10 && qual == 'P')
       {
              printf("Employee salary=12000");
       }
       else if (gender == 'F' && yos >= 10 && qual == 'G')
       {
              printf("Employee salary=9000");
       }
       else if (gender == 'F' && yos < 10 && qual == 'P')
       {
              printf("Employee salary=10000");
       }
       else if (gender == 'F' && yos < 10 && qual == 'G')
       {
              printf("Employee salary=6000");
       }

       return 0;
}