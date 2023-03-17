/*Write macro definitions with arguments for calculation of Simple
Interest and Amount. Store these macro definitions in a file called
“interest.h”. Include this file in your program, and use the macro
definitions for calculating simple interest and amount.*/
#include <stdio.h>
#include "interest.h"
int main()
{
    int pri, noe;
    float roi, amount, si;
    printf("Enter Principal, no. of years and rate of interest:\n");
    scanf("%d%d%f", &pri, &noe, &roi);
    si = SI(pri, noe, roi);
    amount = AMOUNT(pri, si);
    printf("Simple interest  = %f\n", si);
    printf("Total amount = %f\n", amount);
    return 0;
}