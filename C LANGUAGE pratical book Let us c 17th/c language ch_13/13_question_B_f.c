/*For the following set of sample data , compute the standard deviation and the mean 
-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2
The formula for the standard devition is 
s=root{1/n-1(sum(xi-x_))}
where xi is the data item and x- is hte mean*/
#include <stdio.h>
#include <math.h>
int main()
{
    int arr[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int n = 15;
    float sum = 0;
    float mean = 0;
    float std;
    for (int i = 0; i < n; i++)
    {
        mean = mean + arr[i];
    }
    
    mean = mean / n;

    for (int i = 0; i < n; i++)
    {
        sum = sum + pow((arr[i] - mean), 2);
    }

    std = sqrt(sum / (n - 1));
    printf("Standard Devation = %f\n", std);
    return 0;
}