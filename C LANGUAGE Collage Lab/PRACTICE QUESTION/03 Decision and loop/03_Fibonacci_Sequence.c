/*	C Program to Display Fibonacci Sequence*/
#include <stdio.h>
int fibonacci(int num);
int main()
{
    int num;
    printf("Enter the number which you want fibonacci series:\n");
    scanf("%d", &num);
    printf("Fobonacci value of %dth terms = %d", num, fibonacci(num));
    return 0;
}
int fibonacci (int num)
{
    int result;
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
       
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}