/*C Program to Find G.C.D Using Recursion.*/
#include <stdio.h>
int gcd(int, int);
int main()
{
    int num1, num2;
    printf("Enter two number:::\n");
    scanf("%d%d", &num1, &num2);
    int result = gcd(num1, num2);
    printf("G.D.C of two number %d and %d is %d.\n", num1, num2, result);
    return 0;
}
int gcd(int n1, int n2)
{
    int result;
    if (n1 == 1 || n2 == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= n1 && i <= n2; i++)
        {
            // For final condition when both number are not divide by a perticualr number
            if (i == n1 || i == n2)
            {
                if (n1 % i != 0 || n2 % i != 0)
                {
                    return 1;
                }
            }

            if (n1 % i == 0 && n2 % i == 0)
            {
                n1 = n1 / i;
                n2 = n2 / i;
                return i * gcd(n1, n2);
            }
        }
    }
}
