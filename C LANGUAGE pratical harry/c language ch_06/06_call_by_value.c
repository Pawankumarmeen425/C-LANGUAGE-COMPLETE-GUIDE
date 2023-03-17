
#include <stdio.h>
int sum(int, int);
int main()
{
    int a, b;
    printf("Enter the vlaue of a \n");
    scanf("%d", &a);
    printf("Enter the vlaue of b \n");
    scanf("%d", &b);
    printf("the value of a and b before function call is %d and %d \n", a, b);
    printf("The  sum of  %d and %d = %d\n ", a, b, sum(a, b));
    printf("The value of a and b after function call is %d and %d \n", a, b);
    return 0;
    /*in the call by value of we can't change  variable value because in this only copy of variable 
    given to the  function not actual value*/
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 232;
    b = 4343;
    return c;
}
