/*A 5-digit positive integer is entered through the keyboard,
write a recursive and a non-recursive function to calculate
sum of digits of the 5-digit number.*/
#include <stdio.h>

int recursive(int n);
int non_recurcive(int n);
int main()
{
    int num;
    printf("Enter the number::\n");
    scanf("%d", &num);
    int sum1 = recursive(num);
    int sum2 = non_recurcive(num);
    printf("Sum of five digit number Using recersive approch :: %d\n", sum1);
    printf("Sum of five digit number Using non_recersive approch :: %d\n", sum1);
    return 0;
}
int recursive(int n)
{
    int sum;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        sum = n % 10 + recursive(n / 10);
    }
    return sum;
}
int non_recurcive(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}