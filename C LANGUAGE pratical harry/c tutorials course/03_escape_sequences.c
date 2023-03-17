#include <stdio.h>

int main()
{
    int a = 5;
    float b = 3.54;
    printf("the value of a is %d and vlaue of b is %f \n", a, b);
    printf("the value of a is\t %d  and \v vlaue of b is %f \n ", a, b);
    printf("the value of a \' is %d and \\vlaue of b \" is %f\n", a, b);
    printf("the value of a is %d and \\n vlaue of b is %f", a, b);

    return 0;
}