/*Example 4.2: A company insures its drivers in the following cases:
 If the driver is married.
 If the driver is unmarried, male & above 30 years of age.
 If the driver is unmarried, female & above 25 years of age.

In all other cases, the driver is not insured. If the marital status, sex and
age of the driver are the inputs, write a program to determine whether
the driver should be insured or not.
Here after checking a complicated set of instructions the final output of
the program would be one of the two—either the driver should be
insured or the driver should not be insured. As mentioned above, since
these are the only two outcomes this problem can be solved using
logical operators. But before we do that, let us write a program that
does not make use of logical operators.*/

#include<stdio.h>

int main (){
    int age;
    char sex,ms;
    printf("Enter driver age,sex(male=M,female=F),marital status(married=M, unmarried=U)\n");
    scanf("%d\n%c\n%c",&age,&sex,&ms);

if(ms=='M'){
    printf("The driver should be insured");
}
else if(ms=='U'&& sex=='M' && age>30){
    printf("The driver should be insured");
}
else if(ms=='U'&& sex=='F'&& age>25){
    printf("The driver should be insured");
}
else
{
    printf("The driver should not be indured");
}

return 0;
}