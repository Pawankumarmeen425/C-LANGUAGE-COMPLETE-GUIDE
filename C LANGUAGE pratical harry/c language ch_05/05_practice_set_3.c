/*Write a function to calculate force of attraction on a body of mass m exerted by earth  
                                                                              (g = 9.8)        */
#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the value of mass of body in kgs:\n");
    scanf("%f", &m);
    printf("Force of attraction on a body of %.02fkg mass = %.02f Nutan\n", m, force(m));
    return 0;
}
float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}