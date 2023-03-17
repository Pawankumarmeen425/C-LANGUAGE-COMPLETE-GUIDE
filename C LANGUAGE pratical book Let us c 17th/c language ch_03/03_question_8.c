/*Given a point (x, y), write a program to find out if it lies on the Xaxis, 
  Y-axis or on the origin  */
#include<stdio.h>

int main (){
    float x,y;
    printf("Enter the coordinate of the point (x , y)\n");
    scanf("%f%f",&x,&y);
    if (x==0 && y==0)
    {
        printf("point lies on the origin");
    }
    else if (x==0 && y!=0)
    {
        printf("Point lies on the y axis.");
    }
    else if (y==0 && x!=0)
    {
        printf("Point lies on the x axis.");
    }
    else{
        printf("Point doesn't lies on the origin and x-axis,  y-axis");
    }
    
    
    
return 0;
}  
