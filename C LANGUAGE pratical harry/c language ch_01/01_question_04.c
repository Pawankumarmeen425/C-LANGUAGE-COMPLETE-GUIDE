/* temperature of a city in Fahrenheit degress is input throgh the  keybord.Write  a program to convert this 
temperature into Centigrade degrees.*/
#include <stdio.h>

int main()
{
    int tif; 
    float tic;
     /* tif=temperature in Fahrenheit
      tic=temperature in Centigrade*/
    
    printf("Temperature of a city in Fahrenheit degress ");
    scanf("%d", &tif);
    tic =(tif - 32)*0.5556;
    printf("temperature in Centigrade degrees %f",tic);

    return 0;
}