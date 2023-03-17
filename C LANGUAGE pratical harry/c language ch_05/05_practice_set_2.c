/*Write a progrma to convert celcues temperature into farenheit*/
#include<stdio.h>
float cel_to_far (float cel_tem);
int main (){
    float tem;
    printf("Enter the vlaue of temperature in celcues:\n");
    scanf("%f",&tem);
    printf("\n:: Convert temperature in celcues to farenheit ::\n");
    printf("\n\t%f celcues is equal to %f farenheit:\n\n",tem, cel_to_far (tem));

return 0;
}
float cel_to_far (float cel_tem){
    float far_tem;
    far_tem =  (cel_tem * 9 / 5.0) + 32;
  return far_tem;
}