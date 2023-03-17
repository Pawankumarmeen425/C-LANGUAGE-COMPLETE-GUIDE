#include <stdio.h>

int main()
{
    int a = 5;
    int *ptra = &a;
    printf("%d\n", ptra);
    ptra++;
    printf("%d\n", ptra);
    printf("%d\n", ptra - 2);
    /*in the pointer artimatic value of pointer increment or decrement by time of data type*/
    return 0;
}