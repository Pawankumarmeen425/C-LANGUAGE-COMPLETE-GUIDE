/*Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking.
 Whoever is forced to pick up the last matchstick loses the game.*/
#include <stdio.h>

int main()
{
    int m = 21, u_p, c_p;
    while (m >= 1)
    {
        printf("\n\nNo. of matches left = %d\n", m);
        printf("Pick up 1, 2, 3 or 4 matches:\n ");
        scanf("%d", &u_p);
        if (u_p > 4 || u_p < 1)
        {
            printf("***You are broken Game Rule, please pick up vaild matches***");
        continue;
        }
        m = m - u_p;
        printf("No. of matches left = %d\n", m);
        c_p = 5 - u_p;
        /* Because we ensure that computer always win game
         so sum of u_p+c_p=5. that's why 5*4=20.  And then last matches pick up by user and 
         user lost game always.*/
        printf("No. of matches  which  picked up by computer = %d\n", c_p);
        m = m - c_p;
        if (m == 1)
        {
            printf("\n\nNumber of matches left %d\n", m);
            printf("You lost the game !!\n");
            break;
        }
    }
    return 0;
}