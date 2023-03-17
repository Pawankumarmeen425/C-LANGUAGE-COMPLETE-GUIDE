/*Write a recursive function to obtain the running sum of first
25 natural numbers.*/
#include <stdio.h>
int sum(int);
int main()
{
    int num = 25;
    int result = sum(num);
    printf("Sum of first 25 natural number  = %d\n", result);
    return 0;
}
int sum(int num)
{
    int result;
    if (num == 0)
    {
        return 0;
    }
    else
    {
       
        result = num + sum(num - 1);
    }
    return result;
}