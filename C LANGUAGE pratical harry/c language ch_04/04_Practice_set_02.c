/*Write a program to print multiplaction table of 10 in revesered order */
#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("\n***Multiplaction table of %d in reveresed order:***\n", num);
    for (i = 10; i; i--)
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }

    return 0;
}