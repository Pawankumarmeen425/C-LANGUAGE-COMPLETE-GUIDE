/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not*/
#include <stdio.h>

int main()
{
    int num,num1, d5, d4, d3, d2, d1, rev_num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    d5 = num % 10;
    num1 = num / 10;
    d4 = num1 % 10;
    num1 = num1 / 10;
    d3 = num1 % 10;
    num1 = num1 / 10;
    d2 = num1 % 10;
    num1 = num1 / 10;
    d1 = num1 % 10;
    num1 = num1 / 10;
    rev_num = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    printf("The reversed number is:\n%d\n", rev_num);
    if (rev_num == num)
    {
        printf("The original number and reversed number is equal");
    }
    else
    {
        printf("The reversed number is not equal to  original number");
    }

    return 0;
}