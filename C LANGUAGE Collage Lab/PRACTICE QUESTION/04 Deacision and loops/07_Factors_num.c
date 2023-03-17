/*	C Program to Display Factors of a Number.*/
#include<stdio.h>

int main (){
    int num;
    printf("Enter the number::\n");
    scanf("%d",&num);
    printf("::Factors of number %d is::\n",num);
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            printf("%d  ",i);
        }
        
    }
    
return 0;
}