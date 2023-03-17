/*Write a program to sum first n natural numbers using for and do-while loop*/

#include <stdio.h>

int main()
{
    int i=1, num, sum=0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    // for ( i =1; i <=num; i++)
    // {
    //     sum=sum+i;
    // }
    
    do
    {
        sum = sum+i;
        i++;
    } while (i<=num);
    
    printf("Sum of 1 to %d is = %d",num,sum);
    
    return 0;
}