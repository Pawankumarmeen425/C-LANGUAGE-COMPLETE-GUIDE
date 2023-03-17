/* The natural logarithm can be approximated by the following series.

If x is input through the keyboard, write a program to calculate the
sum of first seven terms of this series*/

#include<stdio.h>
#include<math.h>
int main (){
  float x,j,sum=0;
printf("Enter the value of x::\n");
scanf("%f",&x);
j = (x-1)/x*1.0;
// sum =j;

for (int  i = 2; i < 8; i++)
{
    sum = sum+(0.5)*pow(j,i);
}

printf("Sum of first seven terms of the series is %f.",sum+j);


return 0;
}