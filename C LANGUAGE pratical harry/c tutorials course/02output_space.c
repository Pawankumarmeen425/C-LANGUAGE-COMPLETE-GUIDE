#include <stdio.h>

int main()
{
    int a = 4;
    float b = 9.864;
    // printf("The vlaue of a is %d and the vlalue of b is %f",a,b);

    printf("the value of b is %0.4f\n", b); /* it menas zero space before value and value of b with 4 decimal point */

    printf("the value of b is %12.4f\n", b); /* it means 6 space before value (9.8640 six value reserved alredey) and b with 4 decimal point */

    printf("the value of b is %18.6f\n", b); /* it  means 10 spacebefore value  and b with 6 decimal point*/

    printf("the value of b is %-12.4f and\n", b); /* it means 6 space after value and print and after 6 space*/

    printf("the value of b is %-123.8f  sdjkf\n", b);

    return 0;
}