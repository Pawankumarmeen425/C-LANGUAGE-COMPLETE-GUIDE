/* C Program to Count Number of Digits in an Integer. */
#include<stdio.h>

int main (){
    int num,count=0;
    printf("Enter the number::\n");
    scanf("%d",&num);
    int n1=num;
    for (int i = 0; num!=0 ; i++)
    {
        count++;
        num = num/10;
    }
    printf("In the %d number total digit = %d\n",n1,count);
    
return 0;
}

