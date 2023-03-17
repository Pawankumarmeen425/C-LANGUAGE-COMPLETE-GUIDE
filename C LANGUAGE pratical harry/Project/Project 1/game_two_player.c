#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, n1 = 1, n2 = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // Generate random number between 1 and 100
    // printf("The random number is %d\n", number);
    printf("\nNumber guess by the user 1.::\n");
    do
    {
        printf("Please guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf(":Lower Number Please:\n");
        }
        else if (guess < number)
        {
            printf(":Higher Number Please:\n");
        }
        else
        {
            printf("Player 1 guess number in %d attempt.\n", n1);
        }
        n1++;
    } while (guess != number);
    printf("\n\nNumber guess by the user 2.::\n");
    do
    {
        printf("Please guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf(":Lower Number Please:\n");
        }
        else if (guess < number)
        {
            printf(":Higher Number Please:\n");
        }
        else
        {
            printf("Player 2 guess number in %d attempt.\n", n2);
        }
        n2++;
    } while (guess != number);
    if (n1 > n2)
    {
        printf(":::Player 2 win the match:::\n");
    }
    else if (n1 < n2)
    {
        printf(":::Player 1 win the match:::\n");
    }
    else
    {
        printf("::Tie up Match::\n");
    }

    return 0;
}