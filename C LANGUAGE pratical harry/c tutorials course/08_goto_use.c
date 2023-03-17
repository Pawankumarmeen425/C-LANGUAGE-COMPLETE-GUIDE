#include <stdio.h>

int main()
{
    int i, j,num;
    for (i = 1; i <= 8; i++)
    {
        printf("\n\n%d\n",i);
        for (j = 1; j <= 8; j++)
        {
            printf("%d\n",j);
            printf("Enter the number , enter 0 to execit:\n");
            scanf("%d",&num);
            if (num==0)
            {
                // break;
                goto end;
                /*If we use break statemet then control out only to this loop.
                But if we use goto statement then control go to end and out both loop
                and stop program */
            }
            
        }
    }
  end:
    return 0;
}