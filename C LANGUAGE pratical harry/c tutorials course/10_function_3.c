// Function without  argument and with return value 
#include<stdio.h>
int takennumber();
int main (){
    int d; 
    d = takennumber();
    printf("The number entered is: %d\n",d);
return 0;
}
int takennumber()
{   int num;
    printf("Enter the  number:\n");
    scanf("%d",&num);
    return num;
}