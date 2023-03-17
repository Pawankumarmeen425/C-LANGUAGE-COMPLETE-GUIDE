/*Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions)*/
#include<stdio.h>
#include<math.h>
int main (){
    float x,y,r,dis,di;
    /* dis = distance between  origin and point
       di= diametere of the circle  */ 
       printf("Enter the coordinates of center (x ,y)\n");
       scanf("%f%f",&x,&y);
       printf("Enter the radius of the circle\n");
       scanf("%f",&r);
       dis = sqrt(x*x+y*y);
       di= r+r;
       printf("%f\n",dis);
       printf("%f\n",di);
       if (dis==di)
       {
           printf("Point is on the circle");
       }
       else if (dis<di)
       {
           printf("Point is incide the circle");
       }
       else{
           printf("Point is outside of the circe");
       }
       

return 0;
}