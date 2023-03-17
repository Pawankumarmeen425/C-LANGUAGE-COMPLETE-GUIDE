/* Calculation of simple interest for 3 sets of p, n and r */
#include <stdio.h>

int main()
{
    int noy, pre, set = 1;
    float rate, si;
    while (set <= 3)
    {
        printf("Enter the vlaue  of number of years,principle,rate\n");
        scanf("%d\n%d\n%f", &noy, &pre, &rate);
        si = noy * pre * rate / 100.0;
        printf(" Simple intrest=%fRS.\n",si);
        set = set + 1;
    }

    return 0;
}