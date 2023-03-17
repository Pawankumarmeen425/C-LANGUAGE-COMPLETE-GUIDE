/*Repeat problem 3 for  a general input provided by the user using scanf */
#include<stdio.h>

int main (){
    int mul[10],num;
    printf("Enter the number that you want multiplation table:\n");
    scanf("%d",&num);
    printf("\n**Multiplation Table of number %d **\n",num);
   for (int  i = 0; i < 10; i++)
   {
       mul[i] = num*(i+1);
   }
   for (int i = 0; i < 10; i++)
   {
       printf("%d * %d = %d\n",num,i+1,mul[i]);
   }
   
    
    
return 0;    
}   
