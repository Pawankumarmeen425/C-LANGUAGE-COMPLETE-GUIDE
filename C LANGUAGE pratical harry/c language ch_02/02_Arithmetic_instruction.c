#include <stdio.h>
#include <math.h> // for return 4 to the power 5

int main()
{
    int a = 4;
    int b = 8;
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);

    int z;
    z = a * b; //    legal
               //     z = b * a; legal
               //     a *b = z;Illegal
    printf("the value of z is %d\n", z);

    printf("5 when divided by 2 leaves a renainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves a renainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a renainder of %d\n", 5 % -2);

    //  No operater is assumed to be present
    // printf("the value of  4 * 5 is %d\n",(4)(5));    will not return 20 worng
    printf("the value of  4 * 5 is %d\n", (4) * (5)); // will return 20 right

    // there is no operater to perform exonentiation in C

    printf("the value of 4^5 is %d\n", 4 ^ 5); // will not produce 4 to the power 5

    printf("the value of 4 to the power 5 is %f\n", pow(4, 5)); //   return 4 to the power 5

    return 0;
}