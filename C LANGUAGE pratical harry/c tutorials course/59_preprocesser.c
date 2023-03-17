#include <stdio.h>
#include "58_files.c"
#define PI 3.14
// Now we define PI to access variables PI throughout the entire program
#define square(x) x *x
int main()
{
    int var = 0;
    // Give error because we define main() function two times. One in the files and other in the our program
    // But if we change name of main function then it not give throug any error
    printf("This is variables : %d\n", var);
    float value = PI;
    printf("The value of pi is %0.2f:\n", value);
    int r;
    printf("Enter the value of the radius::\n");
    scanf("%d", &r);
    float area = PI * square(r);
    printf("Area of the circle::%f\n",area);
    return 0;
}