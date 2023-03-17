#include<stdio.h>
#include<math.h>

int main (){
float num;
printf("Enter the no. which you want inverse\n");
scanf("%f",&num);
    // value of num is in radian.
    printf("sin inverse of %f = %f\n",num,asin(num)*180/3.14);
    printf("cos inverse of %f = %f\n",num,acos(num)*180/3.14);
return 0;
}