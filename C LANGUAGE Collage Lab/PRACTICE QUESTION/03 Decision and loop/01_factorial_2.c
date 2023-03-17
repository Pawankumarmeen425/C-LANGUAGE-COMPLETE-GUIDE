/*C Program to find factorail of a  given number*/
#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter the number::\n");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}
int factorial(int num)
{
    int fact;
    if (num == 0)
    {
        return 1;
    }
    else
    {
        fact = num * factorial(num - 1);
        return fact;
    }
}
