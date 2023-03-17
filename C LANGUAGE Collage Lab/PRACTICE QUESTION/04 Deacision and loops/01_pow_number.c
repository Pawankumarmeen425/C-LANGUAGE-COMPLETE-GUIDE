/*C Program to Calculate the Power of a Number.*/
#include<stdio.h>
#include<math.h>
int main (){
    int num,power,result;
    printf("Enter the number::\n");
    scanf("%d",&num);
    printf("Enter the value of power::\n");
    scanf("%d",&power);
    result = pow(num,power);
    printf("%d power of number %d = %d::\n",power,num,result);
return 0;
}