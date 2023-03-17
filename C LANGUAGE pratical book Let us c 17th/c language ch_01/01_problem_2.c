/* The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.*/
#include<stdio.h>
int main(){
    float km,meter,feet,inches,cm;
    printf("Enter distance between two cities(in km)\n");
    scanf("%f",&km);

meter=km*1000;
cm=meter*100;
inches=cm/2.54;
feet=inches/12;
printf("Distance in meter=%f\n",meter);
printf("Distance in centimeter=%f\n",cm);
printf("Distance in inches=%f\n",inches);
printf("Distance in feet =%f\n",feet);
    return 0;
}