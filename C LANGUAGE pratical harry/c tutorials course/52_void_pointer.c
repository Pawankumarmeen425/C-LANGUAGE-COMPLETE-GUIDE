#include <stdio.h>

int main()
{
    int a = 243;
    float b = 3.53;
    void *ptr;
    ptr = &a;

    printf("The value of a is %d\n", *(int *)ptr);
    ptr = &b;
    printf("The value of b is %f\n", *(float *)ptr);
    /*WE can't store more then one variables at a time . Like this
    ptr = &a;
    ptr = &b;
    Now ptr give right value of b but give wrong value of a*/
    return 0;
}