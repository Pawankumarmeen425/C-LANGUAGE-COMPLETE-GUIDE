/* Write a function that receives marks received by a student in 3
subjects and returns the average and percentage of these marks.
Call this function from main( ) and print the results in main( ).*/
#include <stdio.h>
void avg_per(int m1, int m2, int m3, float *avg, float *per);
int main()
{
    int m1, m2, m3;
    float avg, per;
    printf("Enter the marks of three subject:\n");
    scanf("%d\n%d\n%d", &m1, &m2, &m3);
    avg_per(m1, m2, m3, &avg, &per);
    printf("Average of three subject = %0.3f\n", avg);
    printf("Percentage = %0.2f", per);

    return 0;
}
void avg_per(int m1, int m2, int m3, float *avg, float *per)
{
    *avg = (m1 + m2 + m3) / 3.0;
    *per = (m1 + m2 + m3)*100 / 300.0;
}
