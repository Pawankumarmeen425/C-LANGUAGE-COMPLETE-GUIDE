/*Write macro definitions with arguments for calculation of area and
perimeter of a triangle, a square and a circle. Store these macro
definitions in a file called “areaperi.h”. Include this file in your
program, and call the macro definitions for calculating area and
perimeter for different squares, triangles and circles.*/
/*#define PI 3.1415
#define ARECIR(r)(PI*r*r)
#define PERCIR(r)(2*PI*r)
#define ARESQUR(x)(x*x)
#define PERSQUR(x)(4*x)
#define PERTRI(a,b,c)(a+b+c)
#define AREATRI(b,h)(0.5*b*h)*/
#include <stdio.h>
#include "areaperi.h"
int main()
{
    float r, x;
    printf("Enter the radius of a circule::\n");
    scanf("%f", &r);
    printf("Enter the side of a squre::\n");
    scanf("%f", &x);
    float s1, s2, s3, base, height;
    printf("Enter the sides of a triangle::\n");
    scanf("%f%f%f", &s1, &s2, &s3);
    printf("Enter the base and hight of a triangle::\n");
    scanf("%f%f", &base, &height);
    float per_ci = PERCIR(r);
    float are_ci = ARECIR(r);
    float per_squre = PERSQUR(x);
    float are_squre = ARESQUR(x);
    float per_tri = PERTRI(s1, s2, s3);
    float are_tri = AREATRI(base, height);
    printf("Perimeter of the circle = %0.2f\n", per_ci);
    printf("Area of the circle = %0.2f\n", are_ci);
    printf("Permiter of a squre = %0.2f\n", per_squre);
    printf("Area of a squre = %0.2f\n", are_squre);
    printf("Perimeter of a triangle = %0.2f\n", per_tri);
    printf("Area of a triangle = %0.2f\n", are_tri);
    return 0;
}