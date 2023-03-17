/*Write a program  having a variable i . Print the address of i pass this  variavle 
to a function  and print its address are these address same? why?*/
#include <stdio.h>
void printadd(int a);
int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);
    printf("The address of i is %u\n", &i);
    printadd(i);
    return 0;
}
void printadd(int a)
{
    printf("The address of a is %u\n", &a);
}
