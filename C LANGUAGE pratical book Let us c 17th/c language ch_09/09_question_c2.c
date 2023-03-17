/*If the lengths of the sides of a triangle are denoted by a, b,
and c, then area of triangle is given by
area = squrt(S(S - a)(S - b)(S - c))
where, S = ( a + b + c ) / 2. Write a function to calculate the
area of the triangle*/
#include <stdio.h>
#include<math.h>
float area(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the sides of triangle:\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf("Area of triangle = %0.3f",area(a, b, c));
    return 0;
}
float area(int a, int b, int c)
{
    float s, area;
    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
