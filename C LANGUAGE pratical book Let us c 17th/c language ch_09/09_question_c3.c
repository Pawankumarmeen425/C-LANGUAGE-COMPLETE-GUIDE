/*Write a function to compute the distance between two points and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lines inside the triangle ABC, otherwise returns a value
0.*/
#include <stdio.h>
#include <math.h>
float distance(int, int, int, int);
float area (float,float,float);
int main()
{
    int x1, x2, x3, y1, y2, y3;
    float d1,d2,d3,Area;
    printf("::Enter the triangle vertices::\n");
    printf("Enter the vertices of A(x1,y1):\n");
    scanf("%d \t %d", &x1, &y1);
    printf("Enter the vertices of B(x2,y2):\n");
    scanf("%d \t %d", &x2, &y2);
    printf("Enter the vertices of C(x3,y3):\n");
    scanf("%d \t %d", &x3, &y3);
     d1 = distance(x1, y1, x2, y2);
     d2 = distance(x2, y2, x3, y3);
     d3 = distance(x3, y3, x1, y1);
    printf("Distance between point A and B = %0.3f\n", d1);
    printf("Distance between point B and C = %0.3f\n", d2);
    printf("Distance between point A and C = %0.3f\n", d3);
    Area = area (d1,d2,d3);
   printf("Area of triangle = %f\n",Area);
    return 0;
}
float distance(int a1, int b1, int a2, int b2)
{
    float d;
    d = sqrt((a2 - a1) * (a2 - a1) + (b2 - b1) * (b2 - b1));
    return d;
}
float area (float d1,float d2,float d3){
float s,area;
s = (d1+d2+d3)/2.0;
area = sqrt(s*(s-d1)*(s-d2)*(s-d3));
return area;
}
