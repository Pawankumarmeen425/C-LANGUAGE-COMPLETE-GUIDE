/*C Program to Check Armstrong Number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, org_num, n = 0, result=0, rem;
    printf("Enter the number::\n");
    scanf("%d", &num);
    org_num = num;
    while (num != 0)
    {
        num = num / 10;
        n++;
    }
    num=org_num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        result = result + pow(rem, n);
    }
    if (result == org_num)
    {
        printf("%d is a Armstrong Number:\n", org_num);
    }
    else
    {
        printf("%d is not a Armstrong Number:\n", org_num);
    }

    return 0;
}