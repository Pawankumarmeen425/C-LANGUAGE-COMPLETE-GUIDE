/*C Program to Check Prime or Armstrong Number Using User-defined Function.*/
#include <stdio.h>
void prime_arm(int);
int main()
{
    int num;
    printf("Enter a number::\n");
    scanf("%d", &num);
    prime_arm(num);
    return 0;
}
void prime_arm(int n)
{
    int flag=0;
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("Number %d is a prime number::\n",n);
    }
    else{
        printf("Number %d is not a prime number::\n",n);
    }
    /*For arm num tell mem that 1,2,3..9 is arm num or not. Then wite program */
}