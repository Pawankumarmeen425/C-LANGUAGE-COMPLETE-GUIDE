/*Write a function to calculate the factorial value of  any integer entered through the keyword*/
#include<stdio.h>
int factorial (int n);
int main (){
    int num;
    printf("Enter a number that you want factorial::\n");
    scanf("%d",&num);
    printf("Factorial of %d = %d",num, factorial(num));
return 0;
}
int factorial (int n){
   int fact = 1;
for (int i = 1; i <=n; i++)
{
   fact = fact*i; 
}

return fact;
}
