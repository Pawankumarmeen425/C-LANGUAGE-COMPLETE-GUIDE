/*Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.*/
#include <stdio.h>

int main()
{
    int num;
    char ch = 'y';
    // printf("Would you want to enter any number(y/n)\n");
    // scanf("%c", &ch);
    while (ch == 'y')
    {
        printf("\nEnter the number:\n");
        scanf("%d", &num);
        if (num > 0)
        {
            printf("Entered number is positive number.\n");
        }
        else if (num < 0)
        {

            printf("Entered number is negative number.\n");
        }
        else if (num == 0)
        {
            printf("Entered number is zero.\n");
        }
        fflush(stdin); // clears standard input stream
        printf("\nWould you want to another number(y/n)\n");
        scanf("%c", &ch);
        }

    return 0;
}