#include <stdio.h>

int main()
{
    int num, result = 0, t1 = 1, t2 = 1;
    printf("Enter the number which you want to fiboncci term::\n");
    scanf("%d", &num);
    if (num == 0)
    {
        result = 0;
    }

    else if (num == 1 || num == 2)
    {
        result = 1;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {

            result = t1 + t2;
            t1 = t2;
            t2 = result;
        }
    }

    printf("Fibonacci value of %dth terms = %d\n", num, result);
    return 0;
}
