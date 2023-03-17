/*Given three variables x, y, z write a function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values.*/
#include <stdio.h>
void circular(int *a, int *b, int *c);
int main()
{
    int x, y, z;
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    printf("Enter the value of y:\n");
    scanf("%d", &y);
    printf("Enter the value of z:\n");
    scanf("%d", &z);
    circular(&x, &y, &z);
    printf("After Function Call:\n The vlaue of x = %d\nThe value of y = %d\nThe value of z = %d\n", x, y, z);

    return 0;
}
void circular(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}