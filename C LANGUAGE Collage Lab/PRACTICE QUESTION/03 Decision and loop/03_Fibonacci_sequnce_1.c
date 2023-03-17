/*	C Program to Display Fibonacci Sequence*/
#include <stdio.h>
int main()
{
    int num, result, t1 = 1, t2 = 1;
    printf("Enter the number which you want fibonacci series:\n");
    scanf("%d",&num);
    if (num == 0)
    {
        result = 0;
    }
    else if ((num == 1) || (num == 2))
    {
        result = 1;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            result = t1 + t2;
            t1 = t2 ;  
            t2 = result ;
        }
    }
    printf("Fobonacci value of %dth terms = %d", num, result);
    return 0;
}
