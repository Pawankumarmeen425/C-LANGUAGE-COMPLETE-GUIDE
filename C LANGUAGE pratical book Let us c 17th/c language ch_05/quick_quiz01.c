/* Write a program to print first n natural numbers using do while loop*/

#include<stdio.h>

int main (){
    int i=0,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    
    
return 0;
}