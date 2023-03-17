/*	C Program to Check Whether a Number is Palindrome or Not.*/
#include <stdio.h>

int main()
{
    int num, rev_num = 0, rem = 0, org_num;
    printf("Enter the number::\n");
    scanf("%d", &num);
    org_num = num;
    while (num != 0)
    {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
        num = num / 10;
    }
    if (org_num == rev_num)
    {
        printf("%d number is palindrome number::\n", org_num);
    }
    else
    {
        printf("%d number is not a  palindrome number::\n", org_num);
    }

    return 0;
}