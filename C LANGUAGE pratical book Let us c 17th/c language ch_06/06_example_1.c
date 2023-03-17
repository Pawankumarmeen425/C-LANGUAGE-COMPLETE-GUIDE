/*Write a program to determine weather a number is prime or not */
#include<stdio.h>

int main (){
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    
    for ( i =2; i < num; i++)
    {
         if (num%i==0)
         {
             printf("Entered number is not a prime number");
         break;
         }

    }
    if(i==num){
        printf("Entered number is a prime number");
    }

    
    
return 0;
}