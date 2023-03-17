/*For the following set of n data points (x,y) , write a program ot compute the correlation coefficient r, given by 
r = sumation{(xi-x_)(yi-y_)}/root[{sum(xi-x_)2}*{sum(yi-y_)2}]
x       y
34.22   102.43
39.87   100.93
41.85    97.42
43.23   97.81
40.06   98.32
53.29   98.32
53.29   100.07
54.14   97.08
49.12   91.59
40.71   94.85
55.15   94.65
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {102.43, 100.93, 97.42, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    float x_mean = 0, y_mean = 0;
    for (int i = 0; i < 11; i++)
    {
        x_mean = x_mean + x[i];
        y_mean = y_mean + y[i];
    }
    // printf("%f  %f  ", x_mean, y_mean);
    float sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < 11; i++)
    {
        sum1 = sum1 + ((x[i] - x_mean) * (y[i] - y_mean));
        sum2 = sum2 + pow((x[i] - x_mean), 2);
        sum3 = sum3 + pow((y[i] - y_mean), 2);
    }
    float vlaue=0;
    vlaue = sqrt(sum2*sum3);
    // printf("%f %f %f %f ",sum1,sum2,sum3,vlaue);
    float cc;
    cc = sum1/vlaue;
    printf("Correlation Coefficient =  %f\n",cc);

    return 0;
}