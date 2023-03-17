/*Write a program to sum first n natural numbers using while loop*/

#include <stdio.h>

int main()
{
    int i=1, num, sum=0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    while (i<=num)
    {
        sum=sum+i;
        i++;
    }
    
    printf("Sum of 1 to %d is = %d",num,sum);
    
    return 0;
}