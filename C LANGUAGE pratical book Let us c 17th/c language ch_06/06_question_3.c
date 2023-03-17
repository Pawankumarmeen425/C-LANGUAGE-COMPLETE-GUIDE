/*When interest compounds q times per year at an annual rate of
r % for n years, the principal p compounds to an amount a as per
the following formula
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate the
corresponding as*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, p, r, q, n;
    float x, y, z, result;
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the deatils for the %d set::\n", i );
        printf("Enter the principal amount:\n");
        scanf("%f", &p);
        printf("Enter the rate of interest:\n");
        scanf("%f", &r);
        printf("Enter the number of years:\n ");
        scanf("%f", &n);
        printf("Enter the compounding period:\n ");
        scanf("%f", &q);
        // a=p(1+r/q)nq
        x = r / q;
        y = n * q;
        printf("%f\n%f",x,y);
        a = p * pow(1 + x, y);
        printf("Corrosponding amount = %f\n", a);
    }

    return 0;
}
