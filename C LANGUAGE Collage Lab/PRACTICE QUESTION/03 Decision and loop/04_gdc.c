/* C Program to Find GCD of two Numbers.*/
#include <stdio.h>

int main()
{
    int num1, num2, gcd = 1;
    printf("Enter the value of number1 and number2::\n");
    scanf("%d%d", &num1, &num2);
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("G.C.D of %d and %d is %d", num1, num2, gcd);

    return 0;
}
