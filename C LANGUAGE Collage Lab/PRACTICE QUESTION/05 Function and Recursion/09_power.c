/*C program to calculate the power using recursion*/
#include <stdio.h>
int power(int, int);
int main()
{
    int num, p;
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("Enter the power:\n");
    scanf("%d", &p);
    int result=power(num, p);
    printf("%d power of number %d = %d\n",p,num,result);

    return 0;
}
int power(int num, int p)
{
    if (p == 1)
    {
        return num;
    }
    if (p==0)
    {
        return 1;
    }
    
    else
    {
        return num * power(num, p - 1);
    }
}