/*If value of an angle is input through the keyboard, write a
program to print all its Trigonometric ratios.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int degree;
    float radian;
    const float PI = 3.14159;
    printf("Enter engle in degree\n");
    scanf("%d", &degree);
    radian = degree * PI / 180;

    printf("sin(%d) = %f \n", degree, sin(radian));
    printf("cos(%d) = %f \n", degree, cos(radian));
    printf("tan(%d) = %f \n", degree, tan(radian));
    printf("cot(%d) = %f \n", degree, 1/tan(radian));
    printf("sec(%d) = %f \n", degree, 1/cos(radian));
    printf("cosec(%d) = %f \n", degree, 1/sin(radian));
    return 0;
}