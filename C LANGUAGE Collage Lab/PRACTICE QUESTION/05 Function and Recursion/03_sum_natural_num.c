/*C Program to Find the Sum of Natural Numbers using Recursion.*/
#include <stdio.h>
int sum_natural(int);
int main()
{
    int num;
    printf("Enter the nth number::\n");
    scanf("%d", &num);
    int result = sum_natural(num);
    printf("Sum of first %d natural number = %d\n", num, result);
    return 0;
}
int sum_natural(int n)
{
    int result;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum_natural(n - 1);
    }
}