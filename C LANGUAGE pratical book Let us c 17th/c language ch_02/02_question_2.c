/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r,0 ).
Hint: r = sqrt ( x2 + y2 ) and tan-1 ( y / x )*/

#include<stdio.h>
#include<math.h>
int main (){
    float x,y, r,theta;
    
    printf("Enter the co-ordinates of a point\n");
    scanf("%f %f",&x,&y);
    r = sqrt(x*x+y*y);
    theta= atan(y/x);
    theta = theta * 180 / 3.14 ; /* convert to degrees */
    printf("Polar form:\n (r , theta) = (%f , %f)",r,theta);
return 0;
}
