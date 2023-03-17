/* The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters*/

#include <stdio.h>

int main()
{
    int distance;
    printf("The distance between two cities (in km)\n");
    scanf("%d", &distance);
    printf("The distance between two cities (in meters)%d\n",distance*1000);
    printf("The distance between two cities (in feet)%d\n",distance*1000*100/30);
    printf("The distance between two cities (in inches)%f\n", distance*1000*100/2.5);
    printf("The distance between two cities (in centimeters)%d\n", distance*1000*100);
    return 0;
}