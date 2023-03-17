/*Function code with arguments and with return vlaue.*/
#include<stdio.h>

int sum (int a, int b);

int main2 (){
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    c = sum (a , b);
    printf("The value of c = %d\n",c);
return 0;
}
int sum (int a, int b){
    return a+b;
}