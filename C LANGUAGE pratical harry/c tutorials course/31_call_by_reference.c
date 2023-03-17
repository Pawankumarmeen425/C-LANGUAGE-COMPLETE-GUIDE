/*Quick Quiz::
 Given two number a and b , add them then subtract them and assign them to a and b using call by reference
 For example:
 a=2
 b=6
 
 After running the function.
 a=8
 b=-4*/
#include <stdio.h>
int change(int *x, int *y);
int main()
{
    int a, b;
    printf("Etner the value a and b::\n");
    scanf("%d%d", &a, &b);
    change(&a, &b);
    printf("Value of a and b after function call is %d and %d:",a,b);

    return 0;
}
int change(int *x, int *y)
{
    *x = *x+*y;
    *y = *x-*y-*y;
}
