/*Wind chill factor is the felt air temperature on exposed skin
due to wind. The wind chill temperature is always lower than
the air temperature, and is calculated as per the following
formula:
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v0.16
where t is the temperature and v is the wind velocity. Write a
program to receive values of t and v and calculate wind chill
factor.*/

#include<stdio.h>
#include<math.h>
int main (){
    float t, v, wcf;
    printf("Enter the air themperature:\n");
    scanf("%f",&t);
    printf("Enter the wind velocity:\n");
    scanf("%f",&v);

    wcf = 35.74 + 0.6215*t + ( 0.4275*t - 35.75 ) *pow(v , 0.16);
    printf("The wind chill factor is:\n%f",wcf);
return 0;
}
