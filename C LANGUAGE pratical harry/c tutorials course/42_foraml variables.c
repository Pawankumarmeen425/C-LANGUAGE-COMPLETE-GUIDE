#include <stdio.h>
int func1(int b)
{
    printf("The address inside the func1 is %d\n", &b);
    return b * 10;
}
int main()
{
    int b = 234;
    int val = func1(b);
    int *ptr = &val;
    printf("The address inside the main function is %d\n", &b);
    printf("The vlaue of func1 is %d\n", val);

    return 0;
}
