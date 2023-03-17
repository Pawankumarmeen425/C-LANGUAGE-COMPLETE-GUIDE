/*C Program to genarate multiplation table*/
#include<stdio.h>

int main (){
    int num;
    printf("Enter the number that you want to Multiplaction Table::\n");
    scanf("%d",&num);
    printf("::::Multiplation Table of %d::::\n\n",num);
    for (int i =1; i <=10; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    
return 0;
}