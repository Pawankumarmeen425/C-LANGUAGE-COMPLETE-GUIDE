// #include <stdio.h>

//int main()
// {

//     return 0;
// }
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int num1, num2;
    printf("Enter the two numbers::\n");
    scanf("%d%d", &num1, &num2);
    // printf("Sum of %d and %d is %d\n", num1, num2, sum(num1, num2));
    // Testing the function
    int (*fptr)(int, int); /*It means fter is a function pointer that take address of integer type function
    which function takes two integer.
    If function pointer is not match to function it give error
    For Example::
    Void fun(){
        printf("Good MOrning");
        }*/
    //Declarition of a function pointer
    fptr = &sum;
    // Taking address of funtion sum / Creating of a function pointer
    int d = (*fptr)(num1, num2);
    //  Dereferencing of a fuction pointer
    printf("Sum of %d and %d is %d\n", num1, num2, d);
    return 0;
}