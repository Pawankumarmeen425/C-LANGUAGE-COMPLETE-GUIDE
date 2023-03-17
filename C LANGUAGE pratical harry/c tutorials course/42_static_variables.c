#include <stdio.h>
int rev()
{
    return 324;
}
int func1(int b)
{
    static int n = 3;
    // static int n = rev(); ~~~~ We can't call function using static variables
    // If we don't insilize any value of n then its outomatically insilaze to 0.
    printf("The value of n is %d.\n", n);
    n++;
    /* In the static variables the value of prevarious n is reserves so its not assingned again to 3.And 
    Reserve preverous value of n and perform task */
    return b + n;
}
int b = 3553; /*This is a global variables since its declaires outside the main*/
int main()
{
    int b = 234;

    int val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);

    return 0;
}