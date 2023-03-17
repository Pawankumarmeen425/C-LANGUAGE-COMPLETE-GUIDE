/* Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees*/

#include<stdio.h>

int main (){
    float fr,centi;
    printf("Enter the temperature of the city in Fahrenheit\n");
    scanf("%f",&fr);

    centi=5/9.0*(fr-32);
    printf("Temperature of city in centigrade = %f\n",centi);
return 0;
}