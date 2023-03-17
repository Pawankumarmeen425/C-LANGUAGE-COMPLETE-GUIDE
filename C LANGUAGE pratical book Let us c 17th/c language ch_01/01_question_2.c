/*The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle.*/
#include<stdio.h>

int main (){
    float length,breadth,aor,por,radius,aoc,coc;
    printf("Enter the length  of rectangle:\n");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle:\n ");
    scanf("%f",&breadth);
    printf("Enter the radius of circle:\n");
    scanf("%f",&radius);

    aor=length*breadth;
    por=2*(length*breadth);
    aoc=3.14*radius*radius;
    coc=2*3.14*radius;

    printf("Area of the rectangle = %f\n",aor);
    printf("Primeter of the rectangle = %f\n",por);
    printf("\nArea of circle = %f \n",aoc);
    printf("Circumference of the circle = %f \n",coc);

return 0;
}