//..................Swap two numbers using third variable
#include <stdio.h>

int main()
{
    int a, b, temp;
    //take input from user
    printf("Enter values of a and b:\n");
    scanf("%d%d", &a, &b);
    //Display values before swapping
    printf("....Before swapping......\n");
    printf("value of a is: %d\n", a);
    printf("value of b is: %d\n", b);
    //apply logic
    temp = a;
    a = b;
    b = temp;
    // Display values after swapping
    printf("....After swapping......\n");
    printf("value of a is: %d\n", a);
    printf("value of b is: %d", b);

    return 0;
}