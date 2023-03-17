/*Write a program to receive value of an angle in degrees and check
whether sum of squares of sine and cosine of this angle is equal to
1.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int angle;
    float sum, radian;
    const float pi = 3.14;
    printf("Enter the vlaue of angle in degree:\n");
    scanf("%d", &angle);
    // Convert angle into radian
    radian = angle * (pi / 180);

    // sum = (sin(radian)*sin(radian))+(cos(radian)*cos(radian));
    /*OR*/
    sum = pow(sin(radian), 2) + pow(cos(radian), 2);
    /*  squere of sin angle and cos angle is always 1*/
    sum == 1 ? printf("Sum of squares of sine and cosine of angle %d is equal to 1. \n", angle) : printf("Sum of squares of sine and cosine of angle %d is not equal to 1. \n", angle);

    return 0;
}