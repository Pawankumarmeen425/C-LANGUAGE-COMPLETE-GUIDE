/*Write a program to calculate the sum of the numbers ocurring in the multiplaaction table
 of 'n'*/
#include<stdio.h>

int main (){
    int i=1,num,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while (i<=10)
    {
       num*i;
       sum=sum+num*i;
       i++;
    }
    printf("Sum of multiplaction table of %d is:%d",num,sum);
    
return 0;
}