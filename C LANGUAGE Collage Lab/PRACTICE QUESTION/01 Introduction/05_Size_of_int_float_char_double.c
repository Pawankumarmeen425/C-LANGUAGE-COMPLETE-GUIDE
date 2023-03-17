/*C Program to find size of int , char,float,double*/
#include <stdio.h>

int main()
{
    int x, y, z, w;
    x = sizeof(int);
    y = sizeof(float);
    z = sizeof(char);
    w = sizeof(double);
    printf("Size of a interger number = %d\n", x);
    printf("Size of a float number = %d\n", y);
    printf("Size of a character number = %d\n", z);
    printf("Size of a double number = %d\n", w);

    return 0;
}