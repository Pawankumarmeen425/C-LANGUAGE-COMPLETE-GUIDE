/*Write a program using recursion  to calculate nth element of fibonacci series*/
/*The Rule is Xn = Xn−1 + Xn−2    ; n>2
whrer:Xn is term number "n"
X0=0;
X1=1;
X2=1;
n =	0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	...
Xn =0	1	1	2	3	5	8	13	21	34	55	89	144	233	377	...
*/
#include <stdio.h>
int fibonacci(int num);
int main()
{
    int num;
    printf("Enter the number which you want fibonacci series:\n");
    scanf("%d", &num);
    printf("Fobonacci value of %dth terms = %d", num, fibonacci(num));
    return 0;
}
int fibonacci (int num)
{
    int result;
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        // result = fibonacci(num - 1) + fibonacci(num - 2);
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}