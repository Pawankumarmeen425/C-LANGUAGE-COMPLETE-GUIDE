//Swap two numbers without using third variable
#include<stdio.h>

int main (){
    int a,b;
    //take input from user
    printf("Enter values of a and b:");
    scanf("%d%d",&a,&b);
    //Display values before swapping
    printf("....Before swapping......\n");
    printf("value of a is: %d\n",a);
    printf("value of b is: %d\n",b);
    //apply logic
    a=a+b;
    b=a-b;
    a=a-b;
    // Display values after swapping
    printf("....After swapping......\n");
    printf("value of a is: %d\n",a);
    printf("value of b is: %d",b);

return 0;
}