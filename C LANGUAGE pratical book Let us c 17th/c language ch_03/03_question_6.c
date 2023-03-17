/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line.*/
#include<stdio.h>

int main (){
float x1,x2,x3,y1,y2,y3,s1,s2,s3;
printf("Enter the vlaue of cordinate  x1 & y1 of point first:\n");
scanf("%f%f",&x1,&y1);
printf("Enter the vlaue of cordinate  x2 & y2 of point second:\n");
scanf("%f%f",&x2,&y2);
printf("Enter the vlaue of cordinate  x3 & y3 of point third:\n");
scanf("%f%f",&x3,&y3);
/*slope between two point (x1,y1) and (x2,y2):
   m=y2-y1/x2-x1   */
   s1=(y2-y1)/(x2-x1);
   s2=(y3-y2)/(x3-x2);
   s3=(y1-y3)/(x1-x3);
printf("%f\n%f\n%f\n",s1,s2,s3);
   if (s1==s2 && s1==s3)    
   {
       printf("All the three points fall on one straight line.");
   }
   else{
       printf("All three point does not in straight line.");
   }
   
return 0;
}