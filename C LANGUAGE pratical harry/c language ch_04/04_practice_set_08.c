/* Write a program to calculate the factorial of  a given number*/
#include<stdio.h>

int main (){
    int i ,num,fact=1;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %d",num,fact);
    
return 0;
}