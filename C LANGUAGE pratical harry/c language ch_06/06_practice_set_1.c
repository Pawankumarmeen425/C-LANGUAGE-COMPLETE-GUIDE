/*Write a program to print the address of a variable use the address to get the value
of this variable*/
#include<stdio.h>

int main (){
    int a=8;
    int *ptr=&a;
    printf("The address of variable a is %u\n",ptr);
    printf("The value of valriable a is %d\n",*ptr);
return 0;
}