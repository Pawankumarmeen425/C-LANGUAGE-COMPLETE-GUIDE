/*This is going to be fun!
We will write a program that generate a random number and asks the player to guess it.
If the player's guess is higher then the actual number , the program display
"Lower number please". Similary if the user guess is too low , the program prints
"Higher number please".
When the user guess the correct number , the program displays the number of guesses 
the player used to arrive of the number.
Hints:: Use loops
        Use a random nummber generator*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number,guess,n=1;;
    srand(time(0));
    number = rand() % 100 + 1;
    // Generate random number between 1 and 100
    // printf("The random number is %d\n", number);
    do
    {
     printf("Please guess the number between 1 and 100\n");
     scanf("%d",&guess);
     if (guess>number)
     {
         printf(":Lower Number Please:\n");
     }
     else if (guess<number)
     {
         printf(":Higher Number Please:\n");
     }
     else{
         printf("You guess number in %d attempt.\n",n);
     }
     n++;
    } while (guess!=number);
    
    return 0;
}