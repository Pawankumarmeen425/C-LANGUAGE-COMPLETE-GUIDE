/*Take input from the user and asks to choose 0 for tringular star pattern and 1 for reverse tringualr star 
  pattern
  *
  **
  ***
  ****  <- Tringular star pattern
  
  ****
  ***
  **
  *  <- Reverse Tringular star pattern
  
  */
#include <stdio.h>

int main()
{
    int choice;
    printf("Enter choose the choice:\nEnter 0 for tringular star pattern.\nEnter 1 for reverse tringular star pattern.\n");
    scanf("%d", &choice);
    if (choice == 0)
    {
        int n1;
        printf("Enter the number for tringular star pattern.\n");
        scanf("%d", &n1);
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (choice == 1)
    {
        int n2;
        printf("Enter the number for Revese tringular star pattern.\n");
        scanf("%d", &n2);
        for (int i = n2; i != 0; i--)
        {
            for (int j = 1; j <= i; j++)
            { 
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("You choice wrong choice::\n");
    }

    return 0;
}