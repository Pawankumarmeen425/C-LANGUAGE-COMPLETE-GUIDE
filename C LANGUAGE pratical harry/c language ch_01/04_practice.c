#include <stdio.h>

int main()
{
    // Calculate simple intrest for a set of values.
    int p, n;
    float r, si;
    p = 1000;
    n = 8;
    r = 5.8;
    si = p * n * r / 100;
    printf("the value of si is:%f", si);
    return 0;
}