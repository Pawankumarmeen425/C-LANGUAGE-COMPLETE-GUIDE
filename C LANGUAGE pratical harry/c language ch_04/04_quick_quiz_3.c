/*Write a program to print first n natural numbers using for loop */
#include<stdio.h>

int main (){
    int i, num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("::First %d natural number is::\n",num);
    for ( i = 1; i <=num; i++)
    {
        printf("%d\n",i);
    }
    
return 0;
}