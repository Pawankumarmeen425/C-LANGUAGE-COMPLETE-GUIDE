/*The Body Mass Index (BMI) is defined as ratio of the weight of a
person (in kilograms) to the square of the height (in meters). Write
a program that receives weight and height, calculates the BMI, and
reports the BMI category as per the following table:
    BMI Category              BMI
Starvation                 < 15
Anorexic                   15.1 to 17.5
Underweight                17.6 to 18.5
Ideal                      18.6 to 24.9
Overweight                 25 to 25.9
Obese                      30 to 30.9
Morbidly Obese             >= 40        */
/* BMI=m/h*h;
  here: m=weight (in kilogram)
        h=height(in meter)*/
#include <stdio.h>

int main()
{
    float weight, height, BMI;
    printf("Enter the weight of the person(in kilograms):\n");
    scanf("%f", &weight);
    printf("Enter the height of the person(in meters):\n");
    scanf("%f", &height);
    // Calculate BMI of the person
    BMI = weight / (height * height);
    printf("BMI of the person = %f\n", BMI);
    if (BMI < 15)
    {
        printf("BMI CATEGORY = Starvation:\n");
    }
    else if (BMI >= 15.1 && BMI <= 17.5)
    {
        printf("BMI CATEGORY = Anorexic :\n");
    }
    else if (BMI >= 17.6 && BMI <= 18.5)
    {
        printf("BMI CATEGORY = Underweight :\n");
    }
    else if (BMI >= 18.6 && BMI <= 24.9)
    {
        printf("BMI CATEGORY = Ideal :\n");
    }
    else if (BMI >= 25 && BMI <= 25.9)
    {
        printf("BMI CATEGORY = Overweight :\n");
    }
    else if (BMI >= 30 && BMI <= 30.9)
    {
        printf("BMI CATEGORY = Obese :\n");
    }
    else if (BMI >= 40)
    {
        printf("BMI CATEGORY = Morbidly Obese :\n");
    }

    return 0;
}
