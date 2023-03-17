/*Write a function to compute the greatest common divisor given by
Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
1980 / 1617 = 1 1980 – 1 * 1617 = 363
1617 / 363 = 4 1617 – 4 * 363 = 165
363 / 165 = 2 363 – 2 * 165 = 33
5 / 33 = 5 165 – 5 * 33 = 0
Thus, the greatest common divisor is 33.*/
#include <stdio.h>
int com_div(int, int);
int main()
{
    int i, j;
    printf("Enter two numbers::\n");
    scanf("%d%d", &i, &j);
    int g = com_div(i, j);
    printf("Greatest common divisor of the two numbers is %d \n",g);
    return 0;
}
int com_div(int i, int j)
{
    int k = 1, t;

    while (k != 0)
    {
        k = i / j;
        if (k == 0)
        {
            break;
        }

        t = i;
        i = j;
        j = t - k * j;
    }
    printf("%d %d %d ", k, i, j);
    return j;
}
