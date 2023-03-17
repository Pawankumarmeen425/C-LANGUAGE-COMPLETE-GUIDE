/** Write a program to print first  n natural numbers using for loop*/
#include<stdio.h>

int main (){
    int n;
    printf("Enter the value of n \n");
    scanf("%d",n);
    for (int i = n; i < n; i++)
    {
        printf("The number is %d\n",i);
    }
    
return 0;
}