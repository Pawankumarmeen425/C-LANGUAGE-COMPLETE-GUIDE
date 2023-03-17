/*Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.*/
#include<stdio.h>

int main (){
    int angle=0,a1,a2,a3;
    printf("Enter the three angle of  the triangle: \n");
    scanf("%d%d%d",&a1,&a2,&a3);
    angle=a1+a2+a3;
    if (angle==180)
    {
        printf("The triangle is valid  triangle");
    }
    else{
        printf("Triangle is  not valid");
    }

return 0;
}