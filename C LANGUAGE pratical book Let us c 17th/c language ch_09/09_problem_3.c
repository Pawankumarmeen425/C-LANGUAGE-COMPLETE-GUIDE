/*Write a C function to evaluate the series:
sin(x) = x - (x3 / 3!) + (x5 / 5!) - (x7 / 7!)+.....
up to 10 terms.*/
#include <stdio.h>
int numinator(float, int);
int dinominator(int);
int main()
{
    float x;
    printf("Enter the value of X::\n");
    scanf("%f", &x);
    float sum = 0;
    int i = 1;
    int j = 1;
    float terms = 0;

    while (i <= 5)
    {
        float n = numinator(x, j);
        int d = dinominator(j);
        terms = (float)n / d;
        (i % 2 == 0) ? sum = sum - terms : (sum = sum + terms);

        j = j + 2;
        i++;
    }
    printf("Sum of the series till the five significant digit = %f\n",sum);
    return 0;
}
int numinator(float x, int j)
{

    switch (j)
    {
    case 1:
        x = x;
        break;
    case 3:
        x = x * x * x;
        break;
    case 5:
        x = x * x * x * x * x;
        break;
    case 7:
        x = x * x * x * x * x * x * x;
        break;
    case 9:
        x = x * x * x * x * x * x * x * x * x;
        break;
    default:
        break;
    }

    return x;
}
int dinominator(int j)
{
    int val = 1;
    int i = 1;
    while (i <= j)
    {
        val = val * i;
        i++;
    }

    return val;
}