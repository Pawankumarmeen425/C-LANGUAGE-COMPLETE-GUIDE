/*Write a function power (a,b) to calculate the value of a raised to b*/
#include <stdio.h>
float power(float, int);
int main()
{
    int b;
    float a, c;
    printf("Etner the value of a and b:\n");
    scanf("%f %d", &a, &b);
    c = power(a, b);
    printf("%0.2f to the power %d = %0.2f", a, b, c);
    return 0;
}
float power(float a, int b)
{
    float result = 1;
    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }
    return result;
}
