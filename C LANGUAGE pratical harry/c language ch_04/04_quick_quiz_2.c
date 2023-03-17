/*Write a program  to print first n natural number using  do while loop*/
#include<stdio.h>

int main (){
    int i=1,num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("::First %d natural number is::\n",num);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=num);
    
return 0;
}