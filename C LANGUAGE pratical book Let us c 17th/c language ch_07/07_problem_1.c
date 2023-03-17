/*Write a menu driven program which has following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be
taken and once this action is finished, the menu should reappear.
Unless the user selects the ‘Exit’ option the program should
continue to run.
Hint: Make use of an infinite while and a switch statement.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, choice, fact = 1, i;
    printf("Choice one of below::\n");
    printf("1.Factorial of a number\n");
    printf("2.Prime or not\n");
    printf("3.Odd or even\n");
    printf("4.Exit\n\n");
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("***Calculate Factriol of a number***\n");
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of number %d = %d\n", num, fact);
        break;
    case 2:
        printf("***Find Prime number or not***\n");
        if (num==1)
        {
              printf("%d is not a prime number:\n", num);
        }
        
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("%d is not a prime number:\n", num);
                break;
            }
        }
        if (i == num)
        {
            printf("%d is a prime number:\n", num);
        }
        break;
    case 3:
        printf("***Find Odd or Even number***\n");
        if (num % 2 == 0)
        {
            printf("%d is a even number\n", num);
        }
        else
        {
            printf("%d is odd number:\n", num);
        }
        break;
    case 4:
        exit(0);

    default:
        printf("*Wrong choice*\n");
    }

    return 0;
}