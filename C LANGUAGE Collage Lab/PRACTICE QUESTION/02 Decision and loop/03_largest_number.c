/*C Program to find largest number among three numbers*/
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter the first number:\n");
    scanf("%d", &n1);
    printf("Enter the second number:\n");
    scanf("%d", &n2);
    printf("Enter the third number:\n");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("%d is the largest number:", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d is the largest number:", n2);
    }
    else
    {
        printf("%d is the largest number:", n3);
    }

    return 0;
}