// Function without argument  and without return value
#include<stdio.h>
void multiplaction ();
int main (){
    multiplaction();
return 0;
}
void multiplaction (){
    int num1, num2;
    printf("Enter the first number:\n");
    scanf("%d",&num1);
    
   printf("Enter the second number:\n");
    scanf("%d",&num2);
    printf("Multiplaction of %d and %d is = %d",num1,num2,num1*num2);
    
}