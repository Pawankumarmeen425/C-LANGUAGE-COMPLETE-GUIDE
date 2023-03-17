/*Write a program to generate all Pythogorean Triplets with
side length less than or equal to 30.*/
#include <stdio.h>
int main()
{
  
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            for (int k = 1; k <= 30; k++)
            {
                if (i * i + j * j == k * k)
                    printf("x=%d y=%d z=%d\n", i, j, k);
            }
        }
    }
    return 0;
}