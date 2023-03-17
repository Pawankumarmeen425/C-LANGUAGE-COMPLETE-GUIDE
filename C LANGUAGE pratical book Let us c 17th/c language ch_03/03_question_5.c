/*Given the length and breadth of a rectangle, write a program
to find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length
= 5 and breadth = 4 is greater than its perimeter.*/
#include <stdio.h>

int main()
{
    float area, perimeter, length, breadth;
    printf("Enter the length of the rectangle:\n");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
     printf("The area of rectangel = %f\n",area);
     printf("the perimeter of rectangel = %f\n",perimeter);
    if (area > perimeter)
    {
        printf("Area of rectangle is greater then perimeter:\n");
    }
    else
    {
        printf("Area of rectangle is lesser then perimeter:\n");
    }

    return 0;
}