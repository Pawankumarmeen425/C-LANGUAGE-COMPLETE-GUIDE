/*Write a program to change the value of a variable to ten times of its current 
value .Write  a function  and pass the value by reference*/
#include <stdio.h>
void change(int *num);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    change(&num);
    printf("New value of number = %d",num);

    return 0;
}
void change(int *num)
{
    
    *num= 10 * (*num);
   
}
