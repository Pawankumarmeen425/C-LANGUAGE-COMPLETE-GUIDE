/*Write a recursive function to calculate the sum of first n natural numbers*/
#include <stdio.h>
int sum(int n);
int main()
{
    int num, add;
    printf("Enter the number:\n");
    scanf("%d", &num);
    add = sum(num);
    printf("The  sum of first %d natural numbers = %d", num, add);
    /*We can not treat  function name as a variable name 
    sum = sum(num) */

    return 0;
}
int sum(int n)
{
    // int result;
    //    n+sum(n-1);
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}