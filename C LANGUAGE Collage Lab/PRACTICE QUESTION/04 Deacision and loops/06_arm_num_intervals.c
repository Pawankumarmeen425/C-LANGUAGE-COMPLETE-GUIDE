/*C Program to Display Armstrong Number Between Two Intervals.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, n, result, rem;
    printf("Enter two intervals::\n");
    scanf("%d%d", &num1, &num2);
    printf("::Armstrong number between two intervals %d and %d::\n", num1, num2);
    while (num1 < num2)
    {
        int org_num = num1;
        result = 0;
        n = 0;

        if (num1 == 1)
        {
            result = 1;
        }

        else
        {
            while (num1 != 0)
            {
                num1 = num1 / 10;
                n++;
            }
            num1 = org_num;
            while (num1 != 0)
            {
                rem = num1 % 10;
                num1 = num1 / 10;
                result = result + pow(rem, n);
            }
            num1 = org_num;
        }
        if (org_num == result)
        {
            printf("%d\t", result);
        }
        num1++;
    }

    return 0;
}