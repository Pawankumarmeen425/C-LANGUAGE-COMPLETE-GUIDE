/*Make a game rock, paper and scissor
rock vs scissor = rock wins
paper vs scissor =  scissor wins
paper vs rock = paper wins
Write a c program to allow user to play this game three times with computer . Log the score of compute and the 
player . Display the name of the winner at the end
Note:: You have to display name of the player during the game. Take user name as an input from  the user*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randnum(int n);
int rock_paper_scissor(char c, char u);
int main()
{
    int number;
    int i = 1;
    int n1, n2, n;
    n1 = n2 = n=0;
    printf("*****Welcome to Rock , Paper and Secissor*****\n");
    while (i <= 3)
    {
        srand(time(0));
        number = rand() % 100 + 1;
        char comp, choice;
        // printf("The random number is %d\n", number);
        if (number <= 33)
        {
            comp = 'r';
        }
        else if (number > 33 && number <= 66)
        {
            comp = 'p';
        }
        else
        {
            comp = 's';
        }
        printf("Enter your choice %d time::\n'r' for rock. 'p' for paper. 's' for sessior\n ",i);
        scanf("%c", &choice);
        if (choice != 'r' && choice != 'p' && choice != 's')
        {
            printf("Please choose a valid choice::\n");
            continue;
        }

        int result = rock_paper_scissor(comp, choice);
        if (result == 1)
        {
            n1++;
        }
        else if (result == -1)
        {
            n2++;
        }
        else if (result == 0)
        {
            n++;
        }
        i++;
    }
    printf("Computer wins total match = %d\n", n2);
    printf("User wins total match = %d\n", n1);
    printf("Draws Match = %d\n", n);
    if (n1 > n2)
    {
        printf("Final Result :: User wins the series\n");
    }
    else if (n2 > n1)
    {
        printf("Final Result :: Computer wins the serise\n");
    }
    else
    {
        printf("Ties up Series::\n");
    }

    return 0;
}
int rock_paper_scissor(char c, char u)
{
    if (c == 'r' && u == 'p')
    {
        return 1;
    }
    else if (c == 'r' && u == 's')
    {
        return -1;
    }
    else if (c == 'p' && u == 'r')
    {
        return -1;
    }
    else if (c == 'p' && u == 's')
    {
        return 1;
    }
    else if (c == 's' && u == 'r')
    {
        return 1;
    }
    else if (c == 's' && u == 'p')
    {
        return -1;
    }
    else if (c == 's' && u == 's')
    {
        return 0;
    }
    else if (c == 'p' && u == 'p')
    {
        return 0;
    }
    else if (c == 'r' && u == 'r')
    {
        return 0;
    }
}