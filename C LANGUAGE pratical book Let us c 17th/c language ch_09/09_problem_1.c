/*Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( ).*/
#include <stdio.h>
#include<math.h>
void sum_avg_std(int, int, int, int, int, int *, float *, float *);
int main()
{
    int n1, n2, n3, n4, n5, sum;
    float avg, std_dev;
    printf("Enter five number:\n");
    scanf("%d\n%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4, &n5);
    sum_avg_std(n1, n2, n3, n4, n5, &sum, &avg, &std_dev);
    printf("Sum of five integers = %d\n", sum);
    printf("Average of five number = %0.2f\n", avg);

    printf("Standered deviation = %0.2f\n", std_dev);
    return 0;
}
void sum_avg_std(int n1, int n2, int n3, int n4, int n5, int *sum, float *avg, float *std_dev)
{
    * sum = n1 + n2 + n3 + n4 + n5;
    * avg = *sum / 5.0;
    * std_dev = sqrt((pow(n1 - *avg, 2) + pow(n2 - *avg, 2) +pow(n3 - *avg, 2) +
     pow(n4 - *avg, 2) +pow(n5 - *avg, 2) )/4.0 );
}
