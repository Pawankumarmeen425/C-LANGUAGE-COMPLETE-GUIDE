/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c,x,y,z; /*lengths of three sides of a triangle */
    float area,s;
    printf("Enter length AB=");
    scanf("%d", &a);
    printf("Enter length BC=");
    scanf("%d", &b);
    printf("Enter length AC=");
    scanf("%d", &c);

    s = (a + b + c) / 2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle is = %f", area);
    return 0;
}