 /*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle. */
#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,sp,area;
    printf("Enter the sides of triangle\n");
    scanf("%f\n%f\n%f",&a,&b,&c);
    sp=(a+b+c)/2.0;
    area= sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of triangle = %f\n", area);

return 0;
}