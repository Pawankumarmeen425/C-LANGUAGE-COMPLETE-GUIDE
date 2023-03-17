/*C Program to Display Prime Numbers Between Intervals Using Function.*/
#include <stdio.h>
void prime_intervels(int, int);
int main()
{
    int num1, num2;
    printf("Enter two intervels::\n");
    scanf("%d%d", &num1, &num2);
    prime_intervels(num1, num2);
    return 0;
}
void prime_intervels(int n1, int n2)
{
    printf("\nPrime number between two intervels %d and %d::\n\n",n1,n2);
    while (n1 < n2)
    {
        int flag = 0;
        for (int i = 2; i <= n1 / 2; i++)
        {
            if (n1 % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\t", n1);
        }
        n1++;
    }
}