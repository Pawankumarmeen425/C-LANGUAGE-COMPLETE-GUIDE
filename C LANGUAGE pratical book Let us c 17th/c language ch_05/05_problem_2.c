/*Write a program to find the factorial value of any number entered through the keyword*/
#include<stdio.h>

int main (){
    int num,fact,i;
    printf("Enter a number:");
    scanf("%d",&num);
    fact=i=1;
    while (i<=num)
    {
        fact=fact*i;
i++;
    }
    printf("Factorial value of %d =%d\n",num,fact);
    
return 0;
}