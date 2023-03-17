#include <stdio.h>
int fib_recursive(int num);
int fib_iterative(int num);
int main()
{
    int num;
    printf("Enter the number which you want to fiboncci term::\n");
    scanf("%d", &num);

    printf("Fibonacci value of %dth terms using iterative approch = %d\n", num, fib_iterative(num));
    printf("Fibonacci value of %dth terms using recracive approch = %d\n", num, fib_recursive(num));
    return 0;
}
int fib_recursive(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fib_recursive(num - 1) + fib_recursive(num - 2);
    }
}
int fib_iterative(int num)
{
    int result = 0, t1 = 1, t2 = 1;
    if (num == 0)
    {
        result = 0;
    }
    else if (num == 1 || num == 2)
    {
        result = 1;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {

            result = t1 + t2;
            t1 = t2;
            t2 = result;
        }
    }
    return result;
}
