#include <stdio.h>
int fact(int num);
int main()
{
    int num;
    printf("Enter the number which you want to factorial::\n");
    scanf("%d", &num);
    int result = fact(num);
    printf("Factorial of the %d number =  %d\n", num, result);
    return 0;
}
int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}