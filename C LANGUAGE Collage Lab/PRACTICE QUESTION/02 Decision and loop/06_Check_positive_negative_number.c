/*C Program to check weather a number is positive of negative*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a  number:\n");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("Number %d is a positive number::", num);
    }
    else
    {
        printf("Number %d is a negative number::", num);
    }
    return 0;
}