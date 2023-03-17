// Find the size of int, float, char and double
#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("size of int is:%d bytes\n", sizeof(a));
    printf("size of float is:%d bytes\n", sizeof(b));
    printf("size of char is:%d bytes\n", sizeof(c));
    printf("size of double is:%d bytes\n", sizeof(d));
    return 0;
}