/*C Program to Find Factorial of a Number Using Recursion.*/
#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter the number::\n");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("Factorial of number %d is::%d\n", num, fact);
    return 0;
}
int factorial(int n)
{
    if (n == 1 ||n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}