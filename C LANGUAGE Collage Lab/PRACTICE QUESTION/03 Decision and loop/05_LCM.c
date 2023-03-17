/*C Program to Find LCM of two Numbers*/
#include <stdio.h>

int main()
{
    int num1, num2, gcd = 1, lcm;
    printf("Enter the value of number1 and number2::\n");
    scanf("%d%d", &num1, &num2);
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (num1 * num2) / gcd;
    printf("LCM of two number %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
