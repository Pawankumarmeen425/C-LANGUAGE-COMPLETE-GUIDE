/*C Program to Add Two Complex Numbers by Passing Structure to a Function.*/
#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;

} com;
int add(com n1, com n2);
int main()
{
    com n1, n2, result;
    printf("::Enter the first complex number::\n");
    printf("Real Part = ");
    scanf("%f", &n1.real);
    printf("Imaganiry Part = ");
    scanf("%f", &n1.imag);
    printf("::Enter the second complex number::\n");
    printf("Real Part = ");
    scanf("%f", &n2.real);
    printf("Imaganiry Part = ");
    scanf("%f", &n2.imag);
    add(n1, n2);
    // printf("Sum = %.1f + %.1f", n1.real + n2.real, n1.imag + n2.imag);
    return 0;
}
// void add(com n1, com n2)
// {

//     printf("Sum = %.1f + %.1f",n1.real + n2.real,n1.imag + n2.imag);
// }
int add(com n1, com n2)
{
    com temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    printf("Sum = %.1f + %.1f", temp.real, temp.imag);
    // return (int)*(temp);
}
