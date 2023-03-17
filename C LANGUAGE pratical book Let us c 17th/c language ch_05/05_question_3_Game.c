/*Write a program for a matchstick game being played between the two user.
 Rules for the game are as follows:
 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the user1 picks,then the user 2 does its picking.
 Whoever is forced to pick up the last matchstick loses the game.*/
#include <stdio.h>

int main()
{
    int m = 21, u_1, u_2;
    while (m > 1)
    {
        printf("\n\nNo. of matches left = %d\n", m);
        printf("Pick up 1, 2, 3 or 4 matches by user 1st:\n ");
        scanf("%d", &u_1);
        if (u_1 > 4 || u_1 < 1)
        {
            printf("***You are broken Game Rule, please pick up vaild matches***\n");
            continue;
        }
        m = m - u_1;
        if (m == 1)
        {
            printf("\n\nNumber of matches left %d\n", m);
            printf("User 2nd lost the game !!\n");
            break;
        }
        if (m == 0)
        {
            printf("NO result get,player 1st are dum:");
        }
        while (m > 1)
        {
            printf("No. of matches left = %d\n", m);
            printf("Pick up 1, 2, 3 or 4 matches by user 2nd:\n ");
            scanf("%d", &u_2);
            if (u_2 <= 4 && u_2 >= 1)
            {
                break;
            }
            else
            {
                printf("***You are broken Game Rule, please pick up vaild matches***\n");
                continue;
            }
        }
        m = m - u_2;
        if (m == 1)
        {
            printf("\n\nNumber of matches left %d\n", m);
            printf("User 1st lost the game !!\n");
            break;
        }
        if (m == 0)
        {
            printf("NO result get,player 2nd are dum:");
        }
        
    }
    return 0;
}