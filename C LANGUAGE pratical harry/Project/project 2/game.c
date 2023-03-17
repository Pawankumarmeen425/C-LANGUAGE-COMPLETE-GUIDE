#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snake_water_gun(char, char);
int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number < 33 && number > 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter your choice!\nEnter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    printf("You choose %c and computer choose %c::\n", you, comp);
    int result = snake_water_gun(you, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You win!\n");
    }
    else if (result == -1)
    {
        printf("You lose!\n");
    }

    return 0;
}
int snake_water_gun(char y, char c)
{
    // return 1 if you win, -1 if you lose and 0 if draw

    // condition for draw match
    if (y == c)
    {
        return 0;
    }
    // condition for non_draw match
    else if (y == 's' && c == 'w')
    {
        return 1;
    }
    else if (y == 's' && c == 'g')
    {
        return -1;
    }
    else if (y == 'w' && c == 's')
    {
        return -1;
    }
    else if (y == 'w' && c == 'g')
    {
        return 1;
    }
    else if (y == 'g' && c == 's')
    {
        return 1;
    }
    else if (y == 'g' && c == 'w')
    {
        return -1;
    }
    else
    {
        printf("You choose worng choice::\n");
    }
}