/*A very good example of recursion is factorial 
 factorial(n) = 1*2*3*4*5.........*n
 factorial(n) = 1*2*3*4*5......n-1 * n
 factorial(n) = factorial(n-1)*n
 */
#include <stdio.h>

int factorial(int n);
int main()
{
    int num, fact;
    printf("Enter the number:\n");
    scanf("%d", &num);
    //  fact = factorial(num);
    //  printf("Factorial of  %d is %d",num,fact);
                   /*OR*/
    printf("Factorial of  %d is %d", num, factorial(num));

    return 0;
}
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}