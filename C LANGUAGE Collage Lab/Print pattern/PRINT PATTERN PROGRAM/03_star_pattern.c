/*Pirnt the star pattern in the following way::
            *
          * *    
        * * *
      * * * *
    * * * * * 
  * * * * * *
* * * * * * * 
*/
#include <stdio.h>

int main()
{
  int num;
  printf("Enter the number upto you want to print star pattern:\n");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
    for (int s = 1; s <=2*(num-i); s++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}