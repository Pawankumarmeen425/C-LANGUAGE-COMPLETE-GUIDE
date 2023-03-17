/*The area of the triangle can be computed by the sine law when 2 sides of the trinagle and the angle between them are known .
Area =  (1/2)ab sin(angle)
Given the folloiwng 6 trinangule pieces of land , write a program to find their area and determine which is largest.
Plot No.        a       b       angle
1               137.4   80.9    0.78
2               155.2   92.62   0.89
3               149.3   97.62   1.35
4               160.0   100.25  9.00
5               155.6   68.95   1.25    
6               149.7    120.0   1.75
*/
#include <stdio.h>
#include <math.h>
int main()
{
    // float a;
    // float angle = 30*3.14/180;
    // printf("%f ",angle);
    // a=sin(angle);
    // printf("%f",a);
    float a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float b[] = {80.9, 92.62, 97.62, 100.25, 68.95, 120.0};
    float angle[] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
    float area[6];
    float radian = 0;

    for (int i = 0; i < 6; i++)
    {
        radian = 0;
        radian = angle[i] * 3.14 / 180;
        area[i] = a[i] * b[i] * sin(radian) * 1 / 2;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Area of the %d triangle = %f\n", i + 1, area[i]);
    }
    float large = area[0];
    for (int i = 0; i < 6; i++)
    {
        if (area[i] > large)
        {
            large = area[i];
        }
    }
    printf("\nLargest Area Triangle = %f\n", large);

    return 0;
}