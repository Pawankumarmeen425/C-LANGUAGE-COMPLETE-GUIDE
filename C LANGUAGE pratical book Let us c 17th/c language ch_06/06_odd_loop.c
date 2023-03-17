/*Exection of a loop an unknown number of times*/
#include<stdio.h>

int main (){
    int num;
    char ch;
    do
    {
        printf("Enter a number:\n");
        scanf("%d",&num);
        printf("Squire of %d is %d \n",num,num*num);
        printf("\nWant to enter another number y/n \n");
        fflush(stdin);
        scanf("%c",&ch);
    } while (ch =='y');
    
return 0;
}